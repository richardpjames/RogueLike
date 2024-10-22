#include "Sprite.hpp"
#include "TextureManager.hpp"
#include "Game.hpp"

Sprite::Sprite(const char* fileName, int x, int y, int width, int height)
{
	// Load the texture
	texture = TextureManager::loadTexture(fileName);
	// Create the source rectangle
	srcRect = new SDL_Rect();
	// Store the location of the image "slice"
	srcRect->x = x;
	srcRect->y = y;
	srcRect->w = width;
	srcRect->h = height;
}

Sprite::~Sprite()
{
	// Remove object properties from the heap
	SDL_DestroyTexture(texture);
	delete srcRect;
}

void Sprite::draw(int x, int y, int scale)
{
	// Create a destination rectangle based on the input and source
	SDL_Rect* destRect = new SDL_Rect();
	destRect->x = x;
	destRect->y = y;
	destRect->w = srcRect->w * scale;
	destRect->h = srcRect->h * scale;
	// Render the sprite to the screen
	SDL_RenderCopy(Game::renderer, texture, srcRect, destRect);
	// Remove the destination rectangle from the heap
	delete destRect;
}