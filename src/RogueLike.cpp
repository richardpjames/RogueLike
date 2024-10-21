#include "RogueLike.hpp";

int main(int argc, char* argv[])
{
	// Create a new instance of the game
	game = new Game("Roguelike with SDL", 1920, 1080, false);
	// Loop while the game is signalling that it is running
	while (game->running())
	{
		// Handle events, then update and render
		game->handleEvents();
		game->update();
		game->render();
	}
	// Once the game is complete, we clean and exit
	delete game;
	return 0;
}
