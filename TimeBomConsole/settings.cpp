#include "settings.hpp"

#include <iostream>

void TB_Settings::Screen::screen_settings(int width, int height,
					  int frame_rate) {
	this->screen_width = width;
	this->screen_height = height;
	this->frame_rate = frame_rate;
}