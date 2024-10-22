#pragma once
#include <SDL.h>
#include <fmt/core.h>
#include "Player.hpp"

class Game {

public:
	Game(const char* title, int width, int height, bool fullScreen);
	~Game();
	void handleEvents();
	void update();
	void render();
	bool running();
	static SDL_Renderer* renderer;

private:
	bool isRunning = false;
	SDL_Window* window = nullptr;
	uint32_t lastTickTime = 0;
	double deltaTime = 0;
	Player* player = nullptr;
	const double TICKS_PER_SECOND = 1000;
};