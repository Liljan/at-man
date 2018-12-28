#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"

class Game : public olc::PixelGameEngine
{
public:
	Game()
	{
		sAppName = "@-Man";
	}

	// called once after start
	bool OnUserCreate() override
	{
		return true;
	}

	bool OnUserUpdate(float elapsedTime) override
	{
		for (int y = 0; y < ScreenHeight(); y++)
		{
			for (int x = 0; x < ScreenWidth(); x++)
			{
				Draw(x, y, olc::Pixel(rand() % 255, rand() % 255, rand() % 255));
			}
		}
		std::string text = "@-Man!";
		DrawString(0.5f * (ScreenWidth() - text.size()), 0.5f * ScreenHeight(), text, olc::RED);

		return true;
	}

private:
	int i = 312;
};

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