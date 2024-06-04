#include "src/game/envfx_snow.h"

const GeoLayout bob_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5224, 267, -4163, 122, -56, -68, bob_dl__009_geometry_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4821, 267, -3850, 37, 27, 68, bob_dl__009_geometry_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3428, 267, -4154, 69, 12, 20, bob_dl__009_geometry_003_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3671, 250, -2613, 74, 63, 119, bob_dl__009_geometry_004_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6539, 576, 1294, 83, 76, 100, bob_dl__009_geometry_005_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2333, 250, 1383, 106, -49, -61, bob_dl__009_geometry_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -2333, 250, 245, 24, 16, 45, bob_dl__009_geometry_007_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3080, 250, 2717, 100, 16, -37, bob_dl__009_geometry_008_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6013, 232, 1059, 107, -10, 11, bob_dl__009_geometry_009_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -5683, 250, -1200, 142, -19, 45, bob_dl__009_geometry_010_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6257, 543, -1200, 38, 22, -135, bob_dl__009_geometry_011_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -6803, 767, -1028, 142, 33, 45, bob_dl__009_geometry_012_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -7285, 771, -627, -148, 12, 67, bob_dl__009_geometry_013_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -4520, 250, -682, 51, 103, 29, bob_dl__009_geometry_014_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -4931, 100, -4020, bob_dl_Cube_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -3352, 100, -4020, bob_dl_Cube_001_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -3350, 100, -2440, 0, 90, 0, bob_dl_Cube_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1777, 892, 2321, 0, 90, 0, bob_dl_Cube_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5418, 892, 1030, bob_dl_Cube_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5402, 892, 2422, bob_dl_Cube_005_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, 5379, 892, 3674, bob_dl_Cube_006_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, 1787, 899, 2321, 0, 90, 0, bob_dl_Cube_007_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8144, 1045, -840, bob_dl_Cube_008_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -8970, 1045, -262, bob_dl_Cube_009_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9996, 1045, -262, bob_dl_Cube_010_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -9996, 1274, 497, bob_dl_Cube_011_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(LAYER_OPAQUE, -10737, 1274, 1188, bob_dl_Cube_012_mesh_layer_1),
		GEO_TRANSLATE_NODE(LAYER_OPAQUE, -5694, 300, -4085),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_HAUNTED, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
