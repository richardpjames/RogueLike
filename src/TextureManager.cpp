#include "TextureManager.hpp"
#include "Game.hpp"

SDL_Texture* TextureManager::loadTexture(const char* fileName)
{
	// Load the requested file to a surface
	SDL_Surface* tempSurface = IMG_Load(fileName);
	// Then convert to a texture using our renderer
	SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, tempSurface);
	// Free the surface (no longer required)
	SDL_FreeSurface(tempSurface);
	// Return the loaded texture
	return texture;
};