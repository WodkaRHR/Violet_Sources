""" Class to store palette data (a list of triples (5-bit rgb CCCCC000))"""

import json
import PIL.Image as Image
import os

PATH_NONE = ""

class Palette:

    def __init__(self):
        self.colors = bytes([0] * (16 * 3))
        self.key = PATH_NONE
        self.empty = True

    def load_palette_file(self, path):
        if not path: return
        filename, extension = os.path.splitext(path)
        fd = open(path, "rb")
        if extension.lower() == ".ppl":
            #Open as pymap palette file (maybe we should use another extension, who knows...)
            self.colors = bytes(fd.read())
            fd.close()
            self.key = os.path.relpath(path)
            self.empty = False
        elif extension.lower() == ".png":
            #Extract palette from 4bpp indexed png
            img = Image.open(fd)
            self.colors = bytes(img.palette.palette)
            fd.close()
            self.key = os.path.relpath(path)
            self.empty = False
        else:
            fd.close()
            raise Exception("Unkown palette file extension " + extension)

    def save(self, path):
        fd = open(path, "wb")
        fd.write(self.colors)
        fd.close()