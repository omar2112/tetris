#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>
#include "constants.h"
#include "TetraBase.h"
#include "TPiece.h"
#include <SDL2/SDL_mixer.h>



class Game {

 public:

  enum class Direction
  {
   Left, Right, Down, Hold, Up
  };
  Game();
  ~Game();
  void placeTetraminoDown(Direction currentDirection, TetraBase tetraTemp, TetraBase emptyTetra, int row, int column, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN]);

  void renderTetraGrid(SDL_Renderer *mainRenderer, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN], SDL_Rect grid[Constants::GRID_ROW][Constants::GRID_COLUMN]);
  bool gameOver(/*Direction currentDirection, TetraBase tetraTemp, int row, int column, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN]*/);
  void renderGame(/*SDL_Renderer *mainRenderer, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN], SDL_Rect grid[Constants::GRID_ROW][Constants::GRID_COLUMN]*/);
  void updateGame();
  void handleEvents();
  bool canPlaceTetramino(Direction currentDirection, TetraBase tetraTemp, int row, int column, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN]);
  bool canMoveDownOne(TetraBase tetraTemp, int row, int column, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN]);
  void removeCurrentTetramino(TetraBase tetraTemp, TetraBase emptyTetra, int row, int column, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN]);
  void makeTetraminoPlaced(TetraBase tetraTemp, int row, int column, TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN]);
  SDL_Rect grid[Constants::GRID_ROW][Constants::GRID_COLUMN];
  TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN];
  TetraBase TetraTemp;
  SDL_Window *mainWindow;
  SDL_Renderer *mainRenderer;
  int currentRow;
  int currentColumn;
  TPiece TPieceTemp;
  void init();
  void update();
  bool userQuit;
  int frameCounter;
  bool softDropOn;
 


 private:
  SDL_Event event;
  int row;
  int column;
  const Uint8* currentKeyStates;
  bool dasOn;
  int leftOrRightFrames;

};
#endif
