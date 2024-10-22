#pragma once
#include "GameObject.hpp"
#include "Sprite.hpp"

// Player inherits from GameObject to give access to the update, render and position methods/variables 
class Player : public GameObject {
public: 
	Player(float xpos, float ypos, Sprite* sprite);
	~Player();
	void update(double deltaTime);
	void render();
	// Additional variables required for holding texture/sprite information
	Sprite* playerSprite;
};