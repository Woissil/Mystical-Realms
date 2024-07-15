static const s16 shyguy_eenemy_anim_shyguyidle_values[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0013, 0x004B, 0x00A5, 0x011E, 
	0x01B3, 0x0262, 0x0328, 0x0402, 0x04EE, 0x05E8, 0x06ED, 0x07FC, 0x0911, 
	0x0A28, 0x0B40, 0x0C56, 0x0D67, 0x0E70, 0x0F6E, 0x1060, 0x1142, 0x1213, 
	0x12CF, 0x1375, 0x1402, 0x1473, 0x14C7, 0x14FB, 0x150D, 0x14E9, 0x1480, 
	0x13D6, 0x12F0, 0x11D1, 0x107E, 0x0EFA, 0x0D4A, 0x0B72, 0x0978, 0x0760, 
	0x052F, 0x02ED, 0x009D, 0xFE47, 0xFBF1, 0xF9A2, 0xF75F, 0xF52F, 0xF316, 
	0xF11C, 0xEF44, 0xED94, 0xEC11, 0xEABD, 0xE99E, 0xE8B8, 0xE80E, 0xE7A5, 
	0xE781, 0xE794, 0xE7CC, 0xE826, 0xE8A1, 0xE939, 0xE9EC, 0xEAB8, 0xEB9B, 
	0xEC92, 0xED9B, 0xEEB3, 0xEFD8, 0xF107, 0xF23D, 0xF377, 0xF4B3, 0xF5EE, 
	0xF724, 0xF852, 0xF976, 0xFA8C, 0xFB92, 0xFC84, 0xFD5F, 0xFE20, 0xFEC5, 
	0xFF4A, 0xFFAD, 0xFFEA, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 
};

static const u16 shyguy_eenemy_anim_shyguyidle_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x005A, 
	0x0004, 0x0001, 0x005E, 0x0001, 0x005F, 0x0001, 0x0060, 0x0001, 0x0061, 
	0x0001, 0x0062, 0x0001, 0x0063, 0x0001, 0x0064, 
};

static const struct Animation shyguy_eenemy_anim_shyguyidle = {
	0,
	0,
	0,
	1,
	90,
	ANIMINDEX_NUMPARTS(shyguy_eenemy_anim_shyguyidle_indices),
	shyguy_eenemy_anim_shyguyidle_values,
	shyguy_eenemy_anim_shyguyidle_indices,
	0,
};
