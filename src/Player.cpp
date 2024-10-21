#include "Player.hpp"
#include "TextureManager.hpp"

Player::Player(float xpos, float ypos, const char* filePath, int texX, int texY, int texWidth, int texHeight, SDL_Renderer* renderer) : GameObject(xpos, ypos)
{
	// Load the texture for the player character
	playerTexture = TextureManager::loadTexture(filePath, renderer);
	// Set up the source rectangle based on the inputs
	srcRect = new SDL_Rect();
	srcRect->x = texX;
	srcRect->y = texY;
	srcRect->w = texWidth;
	srcRect->h = texHeight;
	// Initialise the destination rectangle similarly
	destRect = new SDL_Rect();
	destRect->x = xpos;
	destRect->y = ypos;
	destRect->w = texWidth;
	destRect->h = texHeight;
}

Player::~Player()
{
	// Clean up any created pointers
	delete srcRect;
	delete destRect;
	// Clean up the SDL texture
	SDL_DestroyTexture(playerTexture);
}

void Player::update(float deltaTime)
{
	// Move across the screen in the x and y direction
	xpos += 100 * deltaTime;
	ypos += 100 * deltaTime;
}

void Player::render(SDL_Renderer* renderer)
{
	// Update the drawing position based on the object position
	destRect->x = xpos;
	destRect->y = ypos;
	// Draw the player to the screen using the loaded texture and rectangles
	SDL_RenderCopy(renderer, playerTexture, srcRect, destRect);
}