#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <SDL2/SDL.h>

class Constants {

  public:
   static const int GRID_RECT_WIDTH = 20;
   static const int GRID_RECT_HEIGHT = 20;
   static const int WINDOW_WIDTH = 1280;
   static const int WINDOW_HEIGHT = 720;
   static const int GRID_ROW = 21;
   static const int GRID_COLUMN = 10;
   static const int GRID_OFFSET_X = 500;
   static const int GRID_OFFSET_Y = 100;
   static const int STARTING_X = 3;
   static const int STARTING_Y = 0;
   static const int TETRAMINO_SIZE = 4;
   static const int FRAMES_PER_SECOND = 60;
   static const int FRAME_DELAY = 1000 / FRAMES_PER_SECOND;
   static const int LEVEL_0_FRAMES = 48;
   static const int LEVEL_1_FRAMES = 43;
   static const int SOFT_DROP_GRAVITY = 1;
   static const int TOTAL_LEVELS = 100;
   static const int TOTAL_TETRAMINOS = 7;
   enum PieceNames {TPiece, LinePiece, LPiece, JPiece, SPiece, ZPiece, SquarePiece};
   static const int TEXT_OFFSET_Y = 20;
   

  private:
   Constants();
   ~Constants();

};
#endif  
