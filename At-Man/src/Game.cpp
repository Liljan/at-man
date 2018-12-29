#include "Game.h"
#include "Globals.h"

Game::Game()
{
	
}

Game::~Game()
{
}

bool Game::OnUserCreate()
{
	m_Pac.x = 0.5f * ScreenWidth();
	m_Pac.y = 0.5f * ScreenHeight();
	m_Pac.speed = 10.0f;
	m_Pac.graphics = '@';
	m_Pac.color = olc::YELLOW;
	m_Pac.isActive = true;

	m_Pac.xDir = 0.f;
	m_Pac.yDir = 0.f;

	return true;
}

bool Game::OnUserUpdate(float elapsedTime)
{
	// Get keyboard input
	HandleInput();

	// Update entities
	MoveEntities(elapsedTime);

	// Render
	Draw();

	return true;
}

void Game::HandleInput()
{
	if (GetKey(KEY_LEFT).bHeld)
	{
		m_Pac.xDir = -1;
		m_Pac.yDir = 0;
	}
	else if (GetKey(KEY_RIGHT).bHeld)
	{
		m_Pac.xDir = 1;
		m_Pac.yDir = 0;
	}
	else if (GetKey(KEY_UP).bHeld)
	{
		m_Pac.xDir = 0;
		m_Pac.yDir = -1;
	}
	else if (GetKey(KEY_DOWN).bHeld)
	{
		m_Pac.xDir = 0;
		m_Pac.yDir = 1;
	}
}

void Game::MoveEntities(float elapsedTime)
{
	if (m_Pac.isActive)
	{
		float newX = m_Pac.x + m_Pac.speed * m_Pac.xDir * elapsedTime;
		float newY = m_Pac.y + m_Pac.speed * m_Pac.yDir * elapsedTime;

		m_Pac.x = newX;
		m_Pac.y = newY;
	}

}

bool Game::Draw()
{
	FillRect(0, 0, ScreenWidth(), ScreenHeight(), olc::BLACK);

	if (m_Pac.isActive)
	{
		DrawChar(m_Pac.x, m_Pac.y, m_Pac.graphics, m_Pac.color);
	}

	// Draw hud
	DrawRect(0, 0, ScreenWidth() - 1, 20, olc::YELLOW);

	for (int i = 0; i < ScreenWidth() / globals::TILE_SCALE; ++i)
	{
		DrawChar(i * globals::TILE_SCALE, 30, 'X');
	}

	

	return false;
}
