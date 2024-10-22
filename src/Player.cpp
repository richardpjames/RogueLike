#include "Player.hpp"
#include "TextureManager.hpp"
#include "Game.hpp"

Player::Player(float xpos, float ypos, Sprite* sprite) : GameObject(xpos, ypos)
{
	// Load the texture for the player character
	playerSprite = sprite;
}

Player::~Player()
{
	// Clean up any created pointers
	delete playerSprite;
}

void Player::update(double deltaTime)
{
	// Move across the screen in the x and y direction
	xpos += 100 * deltaTime;
	ypos += 100 * deltaTime;
}

void Player::render()
{
	// Draw the player to the screen using the loaded texture and rectangles
	playerSprite->draw(xpos, ypos, 5);
}