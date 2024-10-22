#pragma once
#include <SDL.h>

class GameObject {

public: 
	GameObject(float xpos, float ypos);
	void update(double deltaTime);
	void render();
	float xpos = 0;
	float ypos = 0;
};