#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

class graphic
{
public:

private:
  
};

int main(int argc, char *argv[])
{

  SDL_Window *mainWindow = SDL_CreateWindow("DAS Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0);

   
  SDL_Renderer *mainRenderer = SDL_CreateRenderer(mainWindow, -1, SDL_RENDERER_PRESENTVSYNC);


  bool quit = false;
  SDL_Event event;
  

  int initTicks = SDL_GetTicks();
  int currentTicks = 0;
  float currentFPS = 0;
  int frameDifference = 0;

  //das stuff
  bool dasRight = false;
  int rightFrames = 0;
  int dasFrames = 0;
  const Uint8* currentKeyStates = SDL_GetKeyboardState(NULL);

  while (!quit) {
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
	quit = true;
      }
      
      if (event.type == SDL_KEYDOWN) {
	switch(event.key.keysym.sym) {
	case SDLK_ESCAPE:
	  quit = true;
	  break;
	}
      }

      if (event.key.repeat == 0 && currentKeyStates[SDL_SCANCODE_RIGHT] ) {
	dasRight = false;
        rightFrames = 1;
	printf("\nrightframes: %u .", rightFrames);
      }

      if (event.key.repeat != 0 && currentKeyStates[SDL_SCANCODE_RIGHT]) {
	rightFrames++;
	if (!dasRight && rightFrames >= 16) {
	  dasRight = true;
	}
	if (dasRight) {
	  if (rightFrames > 16) {
	    rightFrames = 10;
	  }
	}
	printf("\nrightframes: %u .", rightFrames);

      }

      if (event.key.repeat == 0 && currentKeyStates[SDL_SCANCODE_LEFT]) {
	dasRight = false;
	rightFrames = 0;
      }
      
    }

    currentTicks = SDL_GetTicks();
    frameDifference = currentTicks - initTicks;
    printf("frame difference: %u", frameDifference);
    initTicks = currentTicks;
  }

  return 0;
}
