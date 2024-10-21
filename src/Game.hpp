#pragma once
#include <SDL.h>
#include <fmt/core.h>

class Game {

public:
	Game(const char* title, int width, int height, bool fullScreen);
	~Game();
	void handleEvents();
	void update();
	void render();
	bool running();

private:
	bool isRunning = false;
	SDL_Window* window = nullptr;
	SDL_Renderer* renderer = nullptr;

};