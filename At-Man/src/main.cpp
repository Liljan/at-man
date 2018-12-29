#pragma once

#define OLC_PGE_APPLICATION
#include "Game.h"

int main()
{
	Game game;
	if (game.Construct(256, 240, 4, 4))
	{
		game.Start();
	}
	else
	{
		return 1;
	}

	return 0;
}