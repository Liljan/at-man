#pragma once
#include "Typedefs.h"

/*namespace globals // prevents polluting the global namespace
{
	extern size_t GetAppSizeX();
	extern size_t GetAppSizeY();
	extern size_t GetAppScalePerPixel();

	extern size_t GetGameSizeX();
	extern size_t GetGameSizeY();

}*/

// mymodule.cpp
namespace globals
{
	extern const uint APP_SIZE_X = 256;
	extern const uint APP_SIZE_Y = 210;
	extern const uint APP_SCALE_PER_PIXEL = 4;

	extern const uint GAME_SIZE_X = 40;
	extern const uint GAME_SIZE_Y = 30;

	/*
	size_t GetAppSizeX() { return APP_SIZE_X; }
	size_t GetAppSizeY() { return APP_SIZE_Y; }
	size_t GetAppScalePerPixel() { return APP_SCALE_PER_PIXEL; }
	
	size_t GetGameSizeX() { return GAME_SIZE_X; }
	size_t GetGameSizeY() { return GAME_SIZE_Y; }
	*/
}
