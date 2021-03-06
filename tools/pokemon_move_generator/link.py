"""
This module is responsible for normalizing the pokemon
data such that it only contains move in a constants
table and also allows to link the same moveset
to different pokemon.
"""

from . import data
from . import pokemon_crawler
from . import normalize

# Define entry types for movesets

NULL = 0
REAL = 1
LINKED = 2

# Define links (i.e. pokemon that
# use the moveset of another pokemon)

links = {
    252 : 3,
    253 : 6,
    260 : 9,
    261 : 0xb5,
    262 : 0x5e,
    263 : 15,
    264 : 0x167,
    265 : 0x4c,
    266 : 0x17c,
    267 : 0x17b,
    268 : 0x72,
    257 : 0x3e,
    440 : 405, # Groudon-Regent -> Groudon
    441 : 317 # Kecleon Purple -> Kecleon

}


def merge_pkmns(pkmn1: pokemon_crawler.Pokemon, pkmn2: pokemon_crawler.Pokemon):
    """ Merges two pokemon data and returns a new
    pokemon data set."""
    attacks_lvlup = pkmn1.attacks_lvlup + pkmn2.attacks_lvlup
    attacks_lvlup.sort(key=lambda x: x[0])
    attacks_breed = pkmn1.attacks_breed.union(pkmn2.attacks_breed)
    attacks_tutor = {}
    attacks_tutor.update(pkmn1.attacks_tutor)
    attacks_tutor.update(pkmn2.attacks_tutor)
    attacks_tm = pkmn1.attacks_tm + pkmn2.attacks_tm
    availible_attacks = pkmn1.availible_attacks.union(pkmn2.availible_attacks)
    return pokemon_crawler.Pokemon(attacks_lvlup=attacks_lvlup, attacks_breed=attacks_breed,
    attacks_tutor=attacks_tutor, attacks_tm=attacks_tm, availible_attacks=availible_attacks)
 

def update_and_link(pkmns, constants):
    """ Updates the pokemon list by merging the pokemon
    with their respective linked additional data.
    pkmns must be a list of either pokemon objects
    or None. (A link will be expected then.). For all
    pokemon instances the movesets are normalized.
    """
    # First fetch the local pokemon and insert 
    # them into the list 
    for species in data.local_pkmn:
        pkmns[species] = data.local_pkmn[species]

    # Second update the pokemon
    for species in data.updates:
        pkmns[species] = merge_pkmns(pkmns[species], data.updates[species])
    
    species_constants = constants['species']
    num_species = int(species_constants[max(species_constants, key=lambda key: int(species_constants.__getitem__(key)))]) + 1
    #print(f'Linking for {num_species} species.')
    # Apply links: Transform dict species->pkmn to an arary

    linked = []
    for species in range(num_species):
        pkmn = pkmns.get(species)
        if pkmn:
            normalize.normalize_pokemon(pkmn, constants)
            linked.append((REAL, pkmn))
        else:
            if species in links:
                linked.append((LINKED, links[species]))
            else:
                linked.append((NULL, None))

    return linked
            

