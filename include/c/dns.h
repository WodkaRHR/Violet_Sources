#ifndef H_DNS
#define H_DNS

void dns_blend_colors(u16 start_col, u16 col_cnt, color overlay, u8 alpha);
color dns_get_over();
u8 dns_get_alpha();
void dns_apply_shaders(u16 start_col, u16 col_cnt);

void battle_bg_load(u8 bg_id);


void callback_switch_timezone();
void update_timezone();
bool is_inside_map(u8 bank, u8 map);

bool dns_on();

extern u8 built_in_shaders;
#endif
