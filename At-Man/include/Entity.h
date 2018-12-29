#pragma once

#include "olcPixelGameEngine.h"

class Entity
{
public:
	Entity();
	Entity(float x, float y, char graphics);
	~Entity();
	
	void Init();
	void Update();
	void Draw();

	void SetActive(bool b) { m_IsActive = b; }
	bool IsActive() { return m_IsActive; }

protected:
	float m_X;
	float m_Y;
	char m_Graphics;

	bool m_IsActive;
};
