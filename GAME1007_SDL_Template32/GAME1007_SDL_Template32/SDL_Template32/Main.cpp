#include <iostream>
#include <SDL.h>

SDL_Window* g_pWindow = nullptr;
SDL_Renderer* g_pRenderer = nullptr;


// Main function.
int main(int argc, char* args[]) // Main MUST have these parameters for SDL.
{

	int flags = SDL_INIT_EVERYTHING;
	
	if (SDL_Init(flags) == 0)
	{
		g_pWindow = SDL_CreateWindow("Hello there", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN);

	}

	system("pause");
	return 0;
}