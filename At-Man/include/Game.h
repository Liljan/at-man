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

struct Entity
{
	float x, y;
	const char* graphics;
	Type type;
	olc::Pixel color;
	bool isActive = false;
};

// Key bindings
static olc::Key KEY_LEFT = olc::Key::LEFT;
static olc::Key KEY_RIGHT = olc::Key::RIGHT;
static olc::Key KEY_UP = olc::Key::UP;
static olc::Key KEY_DOWN = olc::Key::DOWN;


class Game : public olc::PixelGameEngine
{
public:
	Game();
	~Game();

	// called once after start
	bool OnUserCreate() override;
	bool OnUserUpdate(float elapsedTime) override;
	bool Draw();

private:

	Entity m_Player;
	int dir[2];
};