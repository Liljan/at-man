#pragma once
#include "olcPixelGameEngine.h"
#include "Entity.h"

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
	void HandleInput();
	void MoveEntities(float elapsedTime);
	bool Draw();

private:

	Pac m_Pac;
};