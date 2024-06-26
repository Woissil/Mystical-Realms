void scroll_hmc_dl_Plane_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 25;
	int width = 32 * 0x20;
	int height = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(hmc_dl_Plane_mesh_layer_1_vtx_0);

	deltaX = (int)(0.0 * 0x20) % width;
	deltaY = (int)(0.0 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_gfx_mat_hmc_dl_waer() {
	Gfx *mat = segmented_to_virtual(mat_hmc_dl_waer);

	shift_s(mat, 8, PACK_TILESIZE(0, 1));
	shift_t(mat, 8, PACK_TILESIZE(0, 1));

};

void scroll_hmc() {
	scroll_hmc_dl_Plane_mesh_layer_1_vtx_0();
	scroll_gfx_mat_hmc_dl_waer();
};
