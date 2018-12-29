#include "Game.h"

Game::Game()
{
	
}

Game::~Game()
{
}

bool Game::OnUserCreate()
{
	m_Player.x = 0.5f * ScreenWidth();
	m_Player.y = 0.5f * ScreenHeight();
	m_Player.graphics = "@";
	m_Player.color = olc::YELLOW;
	m_Player.isActive = true;

	dir[0] = 0.0f;
	dir[1] = 0.0f;

	return true;
}

bool Game::OnUserUpdate(float elapsedTime)
{
	// Get keyboard input

	float speed = 20.0f;
	;
	if(GetKey(KEY_LEFT).bHeld)
	{
		dir[0] = -1;
		dir[1] = 0;
	}
	else if (GetKey(KEY_RIGHT).bHeld)
	{
		dir[0] = 1;
		dir[1] = 0;
	}
	else if (GetKey(KEY_UP).bHeld)
	{
		dir[0] = 0;
		dir[1] = -1;
	}
	else if (GetKey(KEY_DOWN).bHeld)
	{
		dir[0] = 0;
		dir[1] = 1;
	}

	m_Player.x += dir[0] * speed * elapsedTime;
	m_Player.y += dir[1] * speed * elapsedTime;

	// Update entities

	// Render
	Draw();

	return true;
}

bool Game::Draw()
{
	FillRect(0, 0, ScreenWidth(), ScreenHeight(), olc::BLACK);


	if (m_Player.isActive)
	{
		DrawString(m_Player.x, m_Player.y, m_Player.graphics, m_Player.color);
	}

	return false;
}
