#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Sprite {
public:
	Sprite(const char* fileName, int srcX, int srcY, int width, int height);
	~Sprite();
	void draw(int x, int y, int scale);
private:
	SDL_Texture* texture;
	SDL_Rect* srcRect;
};