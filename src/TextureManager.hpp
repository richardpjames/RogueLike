#pragma once

#include <SDL.h>
#include <SDL_image.h>

class TextureManager
{
public:
	static SDL_Texture* loadTexture(const char* fileName, SDL_Renderer* renderer);
};