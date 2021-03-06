#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_mixer.h>
#include <string>
#include <list>
#include "constants.h"
#include "TetraBase.h"
#include "TPiece.h"
#include "game.h"
#include <time.h>


struct Coordinate
{
  int x;
  int y;
};

int main(int argc, char *argv[])
{

   srand(time(NULL));  
   Uint32 frameStart;
   int frameTime;
   Game *tetrisGame = new Game(1);

   tetrisGame->initRandom();
   while (!tetrisGame->gameOver()) {
     frameStart = SDL_GetTicks();
     tetrisGame->handleEvents();
     tetrisGame->update();
     tetrisGame->renderGame();
     frameTime = SDL_GetTicks() - frameStart;
     if(Constants::FRAME_DELAY > frameTime) {
       SDL_Delay(Constants::FRAME_DELAY - frameTime);
     }    
   }
   return 0;
}




