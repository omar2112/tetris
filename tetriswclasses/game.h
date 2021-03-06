#ifndef GAME_H
#define GAME_H
#include <SDL2/SDL.h>
#include <algorithm>
#include "constants.h"
#include "TetraBase.h"
#include "TPiece.h"
#include "LinePiece.h"
#include "SquarePiece.h"
#include "JPiece.h"
#include "LPiece.h"
#include "SPiece.h"
#include "ZPiece.h"
#include <SDL2/SDL_mixer.h>
#include "Hud.h"
#include "Graphic.h"


class Game {

 public:

  enum class Direction
  {
   Left, Right, Down, Hold, Up
  };
  Game(int level);
  ~Game();
  void placeTetraminoDown();
  void renderTetraGrid();
  bool gameOver();
  void renderGame();
  void updateGame();
  void handleEvents();
  bool canPlaceTetramino();
  bool canMoveDownOne();
  void removeCurrentTetramino();
  void makeTetraminoPlaced();
  SDL_Rect grid[Constants::GRID_ROW][Constants::GRID_COLUMN];
  TetraBase TetraGrid[Constants::GRID_ROW][Constants::GRID_COLUMN];
  TetraBase TetraTemp;
  SDL_Window *mainWindow;
  SDL_Renderer *mainRenderer;
  int currentRow;
  int currentColumn;
  //LinePiece TPieceTemp;
  TetraBase TPieceTemp;
  void init();
  void update();
  bool userQuit;
  int frameCounter;
  bool softDropOn;
  Direction currentDirection;
  bool canPlaceTetraminoLeft();
  bool canPlaceTetraminoRight();
  bool didLineClear();
  int rowsCleared[Constants::TETRAMINO_SIZE];
  void clearRowsAndGravity();
  bool isRowEmpty(int row);
  void clearRow(int row);
  void copyToRow(int initRow, int destRow);
  void getNewTetramino();
  void addPoints();
  bool isNextLevel();
  void initRandom();
  void assignTetra();
  void getNextTetra();

 private:
  SDL_Event event;
  int row;
  int column;
  const Uint8* currentKeyStates;
  bool dasOn;
  int leftOrRightFrames;
  int levelGravity[Constants::TOTAL_LEVELS];
  int currentLevel;
  int points;
  int numRowsCleared;
  int totalLinesCleared;
  int startingLevel;
  int levelStartLines;
  Hud mainHud;
  int pieceStatCounter[Constants::TOTAL_TETRAMINOS];
  int currentTetraNum;
  int nextTetraNum;
  /*
  int TPieceCounter;
  int LinePieceCounter;
  int LPieceCounter;
  int JPieceCounter;
  int SPieceCounter;
  int ZPieceCounter;
  int SquarePieceCounter;
  */

};
#endif
