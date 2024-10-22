#include "Game.hpp"
#include "Sprite.hpp"

// Initialise to null for static variable
SDL_Renderer* Game::renderer = nullptr;

Game::Game(const char* title, int width, int height, bool fullScreen)
{
	// Flag that the game is running
	isRunning = true;
	// Create flags for the creation of the SDL window
	int flags = 0;
	if (fullScreen)
	{
		flags = SDL_WINDOW_FULLSCREEN;
	}
	// If returns zero, then SDL has been initialised
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
	{
		// Once initialised create our window and renderer
		fmt::print("SDL subsystems initialised\n");
		// Create the game window
		window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, flags);
		if (window)
		{
			// Create the renderer for the window
			renderer = SDL_CreateRenderer(window, -1, 0);
		}
		// If either the renderer or the window didn't create then cause the game to end
		if (!window || !renderer)
		{
			fmt::print("Error creating window or renderer");
			isRunning = false;
		}
		// This will run only if the window and renderer are both correctly created
		else
		{
			// Set the draw colour to cornflower blue
			SDL_SetRenderDrawColor(renderer, 100, 149, 237, 255);
			// This shouldn't be deleted here (will go as part of the player)
			Sprite* playerSprite = new Sprite("assets/rogues.png", 0, 32, 32, 32);
			// Create the player
			player = new Player(0, 0, playerSprite);
		}
	}
	// If SDL does not intialise
	else
	{
		fmt::print("Error initialising SDL");
		isRunning = false;
	}
}

Game::~Game()
{
	// Clear the window and renderer from memory
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	// Quit SDL
	SDL_Quit();
	// Delete the player
	delete player;
	// Print to debug
	fmt::print("SDL Cleaned\n");
}

void Game::handleEvents()
{
	// Create an event and poll for events
	SDL_Event event;
	SDL_PollEvent(&event);
	// Check for events
	switch (event.type)
	{
		// When the quit event is called
	case SDL_QUIT:
		isRunning = false;
		break;
	default:
		break;
	}
}

void Game::update()
{
	// Calculate delta time - first get the current ticks
	uint32_t tickTime = SDL_GetTicks();
	// Work out the difference since the last ticks
	deltaTime = (tickTime - lastTickTime) / TICKS_PER_SECOND;
	// Hold the last ticks for next time
	lastTickTime = tickTime;
	// Update the player
	player->update(deltaTime);
}

void Game::render()
{
	// Clear the screen
	SDL_RenderClear(renderer);
	// Render the player
	player->render();
	// Present the screen
	SDL_RenderPresent(renderer);
}

bool Game::running()
{
	return isRunning;
}