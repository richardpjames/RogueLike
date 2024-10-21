#include "GameObject.hpp"

// Constructor takes the initial position for the object
GameObject::GameObject(float xpos, float ypos)
{
	this->xpos = xpos;
	this->ypos = ypos;
}

// The basic GameObject update simply returns - this will be overridden
void GameObject::update(double deltaTime)
{
	return;
}

// The basic GameObject render simply returns - this will be overridden
void GameObject::render(SDL_Renderer* renderer)
{
	return;
}