#pragma once

#include "olcPixelGameEngine.h"

enum Type
{
	Wall,
	Player,
	Coin,
	Ghost,
	PowerUp,
	Fruit
};

class Entity
{
public:
	float x, y;
	char graphics;
	Type type;
	olc::Pixel color;
};

class Pac : public Entity
{
public:
	float speed;
	int xDir, yDir;
	bool isActive = false;
};
