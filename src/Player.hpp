#pragma once
#include "GameObject.hpp"

// Player inherits from GameObject to give access to the update, render and position methods/variables 
class Player : public GameObject {
public: 
	Player(float xpos, float ypos, const char* filePath, int texX, int texY, int texWidth, int texHeight, SDL_Renderer* renderer);
	~Player();
	void update(double deltaTime);
	void render(SDL_Renderer* renderer);
	// Additional variables required for holding texture/sprite information
	SDL_Rect* srcRect = nullptr;
	SDL_Rect* destRect = nullptr;
	SDL_Texture* playerTexture = nullptr;
};