#pragma warning(push, 0)
#include <FL/Fl.H>
#include <FL/Fl_PNG_Image.H>
#pragma warning(pop)

#include "themes.h"
#include "main-window.h"
#include "tile-buttons.h"

static const uchar palette_bgs_png_buffer[210] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x04, 0x03, 0x00, 0x00, 0x00, 0x0b, 0xfd, 0xbc,
	0x7a, 0x00, 0x00, 0x00, 0x30, 0x50, 0x4c, 0x54, 0x45, 0x18, 0xb2, 0x2a, 0x2b, 0x95, 0xff, 0x43,
	0x00, 0xcc, 0x43, 0xf2, 0xf2, 0x46, 0x99, 0x90, 0x50, 0x60, 0x70, 0x7a, 0x1a, 0x5d, 0x8a, 0xe8,
	0x17, 0x8c, 0x0b, 0x00, 0x9a, 0x63, 0x24, 0xa0, 0xb0, 0xc0, 0xdf, 0x32, 0xef, 0xe6, 0x19, 0x4b,
	0xf5, 0x82, 0x31, 0xff, 0x77, 0xa8, 0xff, 0xe1, 0x19, 0xbc, 0xc9, 0x5c, 0x8d, 0x00, 0x00, 0x00,
	0x10, 0x74, 0x52, 0x4e, 0x53, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50,
	0x50, 0x50, 0x50, 0x50, 0x50, 0xcd, 0xe4, 0x5f, 0x88, 0x00, 0x00, 0x00, 0x41, 0x49, 0x44, 0x41,
	0x54, 0x48, 0x89, 0x63, 0x5c, 0xc5, 0x00, 0x01, 0x4a, 0x50, 0x7a, 0x35, 0x94, 0x9e, 0x05, 0xa5,
	0xdf, 0x41, 0xe9, 0x7b, 0x50, 0x3a, 0x0c, 0x4a, 0x77, 0xa0, 0xa9, 0x33, 0x86, 0xd2, 0x15, 0x68,
	0xe6, 0x9d, 0x41, 0x33, 0x77, 0x35, 0x9a, 0x3c, 0x13, 0xc3, 0x00, 0x83, 0x51, 0x07, 0x8c, 0x3a,
	0x60, 0xd4, 0x01, 0xa3, 0x0e, 0x18, 0x75, 0xc0, 0xa8, 0x03, 0x46, 0x1d, 0x00, 0x00, 0x5f, 0xa8,
	0x08, 0x86, 0x0b, 0x7a, 0x6e, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
	0x60, 0x82
};

static Fl_PNG_Image palette_bgs_image(NULL, palette_bgs_png_buffer, sizeof(palette_bgs_png_buffer));

static const uchar palette_bold_bgs_png_buffer[210] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x10, 0x04, 0x03, 0x00, 0x00, 0x00, 0x0b, 0xfd, 0xbc,
	0x7a, 0x00, 0x00, 0x00, 0x30, 0x50, 0x4c, 0x54, 0x45, 0x18, 0xb2, 0x2a, 0x2b, 0x95, 0xff, 0x43,
	0x00, 0xcc, 0x43, 0xf2, 0xf2, 0x46, 0x99, 0x90, 0x50, 0x60, 0x70, 0x7a, 0x1a, 0x5d, 0x8a, 0xe8,
	0x17, 0x8c, 0x0b, 0x00, 0x9a, 0x63, 0x24, 0xa0, 0xb0, 0xc0, 0xdf, 0x32, 0xef, 0xe6, 0x19, 0x4b,
	0xf5, 0x82, 0x31, 0xff, 0x77, 0xa8, 0xff, 0xe1, 0x19, 0xbc, 0xc9, 0x5c, 0x8d, 0x00, 0x00, 0x00,
	0x10, 0x74, 0x52, 0x4e, 0x53, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0xa0,
	0xa0, 0xa0, 0xa0, 0xa0, 0xa0, 0x62, 0xc2, 0xf9, 0x3c, 0x00, 0x00, 0x00, 0x41, 0x49, 0x44, 0x41,
	0x54, 0x48, 0x89, 0x63, 0x5c, 0xc5, 0x00, 0x01, 0x4a, 0x50, 0x7a, 0x35, 0x94, 0x9e, 0x05, 0xa5,
	0xdf, 0x41, 0xe9, 0x7b, 0x50, 0x3a, 0x0c, 0x4a, 0x77, 0xa0, 0xa9, 0x33, 0x86, 0xd2, 0x15, 0x68,
	0xe6, 0x9d, 0x41, 0x33, 0x77, 0x35, 0x9a, 0x3c, 0x13, 0xc3, 0x00, 0x83, 0x51, 0x07, 0x8c, 0x3a,
	0x60, 0xd4, 0x01, 0xa3, 0x0e, 0x18, 0x75, 0xc0, 0xa8, 0x03, 0x46, 0x1d, 0x00, 0x00, 0x5f, 0xa8,
	0x08, 0x86, 0x0b, 0x7a, 0x6e, 0xc2, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42,
	0x60, 0x82,
};

static Fl_PNG_Image palette_bold_bgs_image(NULL, palette_bold_bgs_png_buffer, sizeof(palette_bold_bgs_png_buffer));

static const uchar palette_digits_png_buffer[305] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x07, 0x04, 0x03, 0x00, 0x00, 0x00, 0x6d, 0xb4, 0xd7,
	0xd1, 0x00, 0x00, 0x00, 0x30, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0x18, 0xb2, 0x2a, 0x2b,
	0x95, 0xff, 0x31, 0xb2, 0xb2, 0x43, 0x00, 0xcc, 0x46, 0x99, 0x90, 0x50, 0x60, 0x70, 0x7a, 0x1a,
	0x5d, 0x8c, 0x0b, 0x00, 0x9a, 0x63, 0x24, 0xaa, 0x96, 0x11, 0xb2, 0x53, 0x76, 0xbb, 0x2a, 0xcc,
	0xcc, 0x6a, 0x28, 0xe6, 0x19, 0x4b, 0xff, 0xff, 0xff, 0x3d, 0xcc, 0x73, 0x6e, 0x00, 0x00, 0x00,
	0x01, 0x74, 0x52, 0x4e, 0x53, 0x00, 0x40, 0xe6, 0xd8, 0x66, 0x00, 0x00, 0x00, 0xaf, 0x49, 0x44,
	0x41, 0x54, 0x78, 0x5e, 0x6d, 0x8f, 0x31, 0x0e, 0x82, 0x40, 0x10, 0x45, 0xf7, 0x06, 0x1b, 0x4e,
	0x60, 0xe2, 0x05, 0x28, 0xbc, 0x02, 0x3d, 0x95, 0xb5, 0x1d, 0x57, 0xa0, 0xa4, 0xb5, 0xa3, 0xb6,
	0xa2, 0xf7, 0x0a, 0x5e, 0xc1, 0x84, 0x13, 0x18, 0x6e, 0xa0, 0xb3, 0x6e, 0xd8, 0x62, 0x21, 0x3c,
	0x27, 0x60, 0x20, 0x31, 0xfe, 0x69, 0x26, 0x7f, 0x7e, 0x5e, 0xfe, 0x18, 0x00, 0xe1, 0x8f, 0xac,
	0x8e, 0xd8, 0xf5, 0x6a, 0x42, 0xc1, 0x53, 0x5c, 0xc2, 0x3e, 0x8d, 0x91, 0x47, 0xe7, 0x0f, 0xdc,
	0x5b, 0xf5, 0xce, 0x35, 0x3b, 0x32, 0xb8, 0x71, 0xa1, 0x3f, 0x52, 0x56, 0x26, 0x04, 0x26, 0xc1,
	0x81, 0x06, 0xe9, 0xf0, 0x40, 0xab, 0x5e, 0x5d, 0x3b, 0x47, 0x9e, 0x0f, 0xd0, 0x34, 0x3d, 0x54,
	0x68, 0x50, 0x26, 0x25, 0xca, 0x3b, 0x8d, 0xd7, 0x99, 0x28, 0x2c, 0x44, 0x97, 0x90, 0x31, 0x88,
	0xd5, 0xe0, 0xc9, 0x96, 0x32, 0x13, 0x71, 0x40, 0x4a, 0x84, 0xce, 0x7b, 0x19, 0x51, 0x8f, 0x1f,
	0xa2, 0xcc, 0x1d, 0x5f, 0x73, 0x47, 0x13, 0x17, 0xe2, 0x28, 0xa1, 0x10, 0xab, 0xc1, 0xad, 0x23,
	0x95, 0x31, 0xac, 0xfa, 0xae, 0x82, 0xb0, 0xbc, 0xcb, 0xf6, 0x35, 0xe6, 0x03, 0xcf, 0xa4, 0xe5,
	0x1a, 0x38, 0x7f, 0xdd, 0x6d, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60,
	0x82
};

static Fl_PNG_Image palette_digits_image(NULL, palette_digits_png_buffer, sizeof(palette_digits_png_buffer));

static const uchar priority_png_buffer[120] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x02, 0x03, 0x00, 0x00, 0x00, 0xb9, 0x3c, 0xbf,
	0x40, 0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xf8, 0x80, 0x08, 0xff,
	0xff, 0xff, 0xf3, 0x7c, 0x8c, 0x46, 0x00, 0x00, 0x00, 0x01, 0x74, 0x52, 0x4e, 0x53, 0x00, 0x40,
	0xe6, 0xd8, 0x66, 0x00, 0x00, 0x00, 0x1d, 0x49, 0x44, 0x41, 0x54, 0x78, 0x5e, 0x63, 0x60, 0x62,
	0x60, 0xe0, 0x6c, 0x60, 0x58, 0x9a, 0xc1, 0x30, 0x35, 0x82, 0x41, 0x35, 0x81, 0x41, 0x2d, 0x81,
	0x41, 0x63, 0x01, 0x00, 0x27, 0xf1, 0x04, 0x59, 0x6f, 0x13, 0x1c, 0xb0, 0x00, 0x00, 0x00, 0x00,
	0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82
};

static Fl_PNG_Image priority_image(NULL, priority_png_buffer, sizeof(priority_png_buffer));

static const uchar obp1_png_buffer[116] = {
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x02, 0x03, 0x00, 0x00, 0x00, 0xb9, 0x3c, 0xbf,
	0x40, 0x00, 0x00, 0x00, 0x09, 0x50, 0x4c, 0x54, 0x45, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,
	0xd6, 0xd6, 0x36, 0x26, 0xd6, 0x94, 0x00, 0x00, 0x00, 0x01, 0x74, 0x52, 0x4e, 0x53, 0x00, 0x40,
	0xe6, 0xd8, 0x66, 0x00, 0x00, 0x00, 0x19, 0x49, 0x44, 0x41, 0x54, 0x78, 0x5e, 0x63, 0x00, 0x02,
	0xd1, 0x00, 0x06, 0xa9, 0x09, 0x0c, 0x92, 0x13, 0x80, 0x24, 0x90, 0xcd, 0xc0, 0xc0, 0x00, 0x00,
	0x1c, 0x52, 0x02, 0xc8, 0x8d, 0xf6, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44,
	0xae, 0x42, 0x60, 0x82
};

static Fl_PNG_Image obp1_image(NULL, obp1_png_buffer, sizeof(obp1_png_buffer));

static const Fl_Color bg_colors[16] = {
	fl_rgb_color(0x12, 0x34, 0x56), fl_rgb_color(0x12, 0x1B, 0x56), fl_rgb_color(0x23, 0x12, 0x56), fl_rgb_color(0x3C, 0x12, 0x56),
	fl_rgb_color(0x56, 0x12, 0x56), fl_rgb_color(0x56, 0x12, 0x3D), fl_rgb_color(0x56, 0x12, 0x23), fl_rgb_color(0x56, 0x1A, 0x12),
	fl_rgb_color(0x56, 0x34, 0x12), fl_rgb_color(0x56, 0x4D, 0x12), fl_rgb_color(0x45, 0x56, 0x12), fl_rgb_color(0x2C, 0x56, 0x12),
	fl_rgb_color(0x12, 0x56, 0x12), fl_rgb_color(0x12, 0x56, 0x2B), fl_rgb_color(0x12, 0x56, 0x45), fl_rgb_color(0x12, 0x4E, 0x56),
};
static const Fl_Color fg_colors[16] = {
	fl_rgb_color(0xAB, 0xCD, 0xEF), fl_rgb_color(0xAB, 0xB4, 0xEF), fl_rgb_color(0xBC, 0xAB, 0xEF), fl_rgb_color(0xD5, 0xAB, 0xEF),
	fl_rgb_color(0xEF, 0xAB, 0xEF), fl_rgb_color(0xEF, 0xAB, 0xD6), fl_rgb_color(0xEF, 0xAB, 0xBC), fl_rgb_color(0xEF, 0xB3, 0xAB),
	fl_rgb_color(0xEF, 0xCD, 0xAB), fl_rgb_color(0xEF, 0xE6, 0xAB), fl_rgb_color(0xDE, 0xEF, 0xAB), fl_rgb_color(0xC5, 0xEF, 0xAB),
	fl_rgb_color(0xAB, 0xEF, 0xAB), fl_rgb_color(0xAB, 0xEF, 0xC4), fl_rgb_color(0xAB, 0xEF, 0xDE), fl_rgb_color(0xAB, 0xE7, 0xEF),
};

static void draw_grid(int x, int y) {
	fl_color(fl_rgb_color(0x40));
	for (int i = 1; i < TILE_SIZE_2X; i += 4) {
		fl_point(x+i, y+TILE_SIZE_2X-1);
		fl_point(x+i+1, y+TILE_SIZE_2X-1);
		fl_point(x+TILE_SIZE_2X-1, y+i);
		fl_point(x+TILE_SIZE_2X-1, y+i+1);
	}
	fl_color(fl_rgb_color(0xC0));
	for (int i = 0; i < TILE_SIZE_2X; i += 4) {
		fl_point(x+i, y+TILE_SIZE_2X-1);
		fl_point(x+i+3, y+TILE_SIZE_2X-1);
		fl_point(x+TILE_SIZE_2X-1, y+i);
		fl_point(x+TILE_SIZE_2X-1, y+i+3);
	}
}

static void draw_selection_border(int x, int y) {
	fl_rect(x, y, TILE_SIZE_2X, TILE_SIZE_2X, FL_BLACK);
	fl_rect(x+1, y+1, TILE_SIZE_2X-2, TILE_SIZE_2X-2, FL_WHITE);
	fl_rect(x+2, y+2, TILE_SIZE_2X-4, TILE_SIZE_2X-4, FL_BLACK);
}

std::vector<Tileset> *Tile_State::_tilesets = NULL;

void Tile_State::draw_tile(int x, int y, bool active, bool selected) {
	if (_tilesets) {
		for (std::vector<Tileset>::reverse_iterator it = _tilesets->rbegin(); it != _tilesets->rend(); ++it) {
			if (it->draw_tile(this, x, y, active)) {
				return;
			}
		}
	}
	uint16_t hi = (id & 0xF0) >> 4, lo = id & 0x0F;
	char l1 = (char)(hi > 9 ? 'A' + hi - 10 : '0' + hi), l2 = (char)(lo > 9 ? 'A' + lo - 10 : '0' + lo);
	const char buffer[3] = {l1, l2, '\0'};
	bool r = Config::rainbow_tiles();
	Fl_Color bg = bg_colors[r ? lo : 0];
	if (!active) { bg = fl_inactive(bg); }
	fl_rectf(x, y, TILE_SIZE_2X, TILE_SIZE_2X, bg);
	int s = OS::is_consolas() ? 11 : 10;
	fl_font(x_flip || y_flip ? FL_COURIER_ITALIC : FL_COURIER, s);
	Fl_Color fg = selected ? FL_YELLOW : x_flip ? y_flip ? FL_YELLOW : FL_MAGENTA : y_flip ? FL_CYAN : fg_colors[r ? hi : 0];
	if (!active) { fg = fl_inactive(fg); }
	fl_color(fg);
	fl_draw(buffer, x, y, TILE_SIZE_2X, TILE_SIZE_2X, FL_ALIGN_CENTER);
}

void Tile_State::draw_attributes(int x, int y) {
	if (palette > -1) {
		Fl_PNG_Image *img = Config::bold_palettes() ? &palette_bold_bgs_image : &palette_bgs_image;
		img->draw(x, y, TILE_SIZE_2X, TILE_SIZE_2X, TILE_SIZE_2X * palette, 0);
		palette_digits_image.draw(x+1, y+1, 5, 7, 5 * palette, 0);
	}
	if (priority) {
		priority_image.draw(x+8, y+8);
	}
	if (obp1) {
		obp1_image.draw(x+8, y+1);
	}
}

// {length*2, X,Y, ...}
static const int digit_pixels[16][1+13*2] = {
	{10*2, 1,0, 2,0, 0,1, 2,1, 0,2, 2,2, 0,3, 2,3, 0,4, 1,4},                // 0
	{ 8*2, 1,0, 0,1, 1,1, 1,2, 1,3, 0,4, 1,4, 2,4},                          // 1
	{ 8*2, 0,0, 1,0, 2,1, 1,2, 0,3, 0,4, 1,4, 2,4},                          // 2
	{ 7*2, 0,0, 1,0, 2,1, 1,2, 2,3, 0,4, 1,4},                               // 3
	{ 9*2, 0,0, 2,0, 0,1, 2,1, 0,2, 1,2, 2,2, 2,3, 2,4},                     // 4
	{ 9*2, 0,0, 1,0, 2,0, 0,1, 0,2, 1,2, 2,3, 0,4, 1,4},                     // 5
	{11*2, 1,0, 2,0, 0,1, 0,2, 1,2, 2,2, 0,3, 2,3, 0,4, 1,4, 2,4},           // 6
	{ 7*2, 0,0, 1,0, 2,0, 2,1, 2,2, 1,3, 1,4},                               // 7
	{13*2, 0,0, 1,0, 2,0, 0,1, 2,1, 0,2, 1,2, 2,2, 0,3, 2,3, 0,4, 1,4, 2,4}, // 8
	{11*2, 0,0, 1,0, 2,0, 0,1, 2,1, 0,2, 1,2, 2,2, 2,3, 0,4, 1,4},           // 9
	{10*2, 1,0, 0,1, 2,1, 0,2, 1,2, 2,2, 0,3, 2,3, 0,4, 2,4},                // A
	{10*2, 0,0, 1,0, 0,1, 2,1, 0,2, 1,2, 0,3, 2,3, 0,4, 1,4},                // B
	{ 7*2, 1,0, 2,0, 0,1, 0,2, 0,3, 1,4, 2,4},                               // C
	{10*2, 0,0, 1,0, 0,1, 2,1, 0,2, 2,2, 0,3, 2,3, 0,4, 1,4},                // D
	{11*2, 0,0, 1,0, 2,0, 0,1, 0,2, 1,2, 2,2, 0,3, 0,4, 1,4, 2,4},           // E
	{ 9*2, 0,0, 1,0, 2,0, 0,1, 0,2, 1,2, 2,2, 0,3, 0,4},                     // F
};

static void print_digit(int x, int y, uchar d) {
	const int *pixels = digit_pixels[d];
	int n = pixels[0];
	for (int i = 1; i <= n; i += 2) {
		int dx = pixels[i], dy = pixels[i+1];
		fl_point(x + dx, y + dy);
	}
}

void Tile_State::print(int x, int y) {
	if (_tilesets) {
		for (std::vector<Tileset>::reverse_iterator it = _tilesets->rbegin(); it != _tilesets->rend(); ++it) {
			if (it->print_tile(this, x, y)) {
				return;
			}
		}
	}
	char hi = (char)((id & 0xF0) >> 4), lo = (char)(id & 0x0F);
	bool r = Config::rainbow_tiles();
	Fl_Color bg = bg_colors[r ? lo : 0];
	fl_rectf(x, y, TILE_SIZE, TILE_SIZE, bg);
	Fl_Color fg = x_flip ? y_flip ? FL_YELLOW : FL_MAGENTA : y_flip ? FL_CYAN : fg_colors[r ? hi : 0];
	fl_color(fg);
	print_digit(x, y+1, hi);
	print_digit(x+4, y+2, lo);
}

Tile_Swatch::Tile_Swatch(int x, int y, int w, int h) : Tile_Thing(), Fl_Box(x, y, w, h), _attributes() {
	user_data(NULL);
	box(OS_SPACER_THIN_DOWN_FRAME);
	labeltype(FL_NO_LABEL);
}

void Tile_Swatch::draw() {
	draw_box();
	_state.draw(x() + Fl::box_dx(box()), y() + Fl::box_dy(box()), !_attributes, _attributes, !!active());
}

Tile_Tessera::Tile_Tessera(int x, int y, size_t row, size_t col, uint16_t id, bool x_flip, bool y_flip,
	bool priority, bool obp1, int palette) :
	Tile_Thing(id, x_flip, y_flip, priority, obp1, palette), Fl_Box(x, y, TILE_SIZE_2X, TILE_SIZE_2X),
	_row(row), _col(col) {
	user_data(NULL);
	box(FL_NO_BOX);
	labeltype(FL_NO_LABEL);
	when(FL_WHEN_RELEASE);
}

void Tile_Tessera::draw() {
	int X = x(), Y = y();
	_state.draw(X, Y, true, Config::attributes(), !!active());
	if (Config::grid()) {
		draw_grid(X, Y);
	}
	if (this == Fl::belowmouse()) {
		draw_selection_border(X, Y);
	}
}

int Tile_Tessera::handle(int event) {
	Main_Window *mw = (Main_Window *)user_data();
	switch (event) {
	case FL_ENTER:
		if (Fl::event_button1() && !Fl::pushed()) {
			Fl::pushed(this);
			do_callback();
		}
		mw->update_status(this);
		redraw();
		return 1;
	case FL_LEAVE:
		mw->update_status(NULL);
		// fallthrough
	case FL_MOVE:
		redraw();
		return 1;
	case FL_PUSH:
		mw->map_editable(true);
		do_callback();
		return 1;
	case FL_RELEASE:
		mw->map_editable(false);
		return 1;
	case FL_DRAG:
		if (!Fl::event_inside(x(), y(), w(), h())) {
			Fl::pushed(NULL);
		}
		return 1;
	}
	return Fl_Box::handle(event);
}

Tile_Button::Tile_Button(int x, int y, uint16_t id) : Tile_Thing(id), Fl_Radio_Button(x, y, TILE_SIZE_2X, TILE_SIZE_2X) {
	user_data(NULL);
	box(FL_NO_BOX);
	labeltype(FL_NO_LABEL);
	when(FL_WHEN_RELEASE);
}

void Tile_Button::draw() {
	int X = x(), Y = y();
	_state.draw(X, Y, true, Config::attributes(), !!active(), !!value());
	if (Config::grid()) {
		draw_grid(X, Y);
	}
	if (value()) {
		draw_selection_border(X, Y);
	}
}

int Tile_Button::handle(int event) {
	// Don't interfere with dragging onto the parent Droppable|Workpane
	return event == FL_ENTER || event == FL_LEAVE || event == FL_DRAG ? 0 : Fl_Radio_Button::handle(event);
}
