#ifndef HUD_H
#define HUD_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <sstream>
#include "Graphic.h"
#include "constants.h"

class Hud {
 public:
  Hud();
  ~Hud();
  void updateHud(SDL_Renderer* renderer, int lines, int points, int level, int* pieceStatCounter, int tetraNum);
  void renderHud(SDL_Renderer* renderer);
  void setHudLocation(int initX, int initY, int statX, int statY);
  std::string getTetraName(int tetraNum);

 private:
  Graphic levelGraphic;
  Graphic pointsGraphic;
  Graphic linesGraphic;
  Graphic TPieceStatGraphic;
  Graphic statGraphic;
  Graphic LinePieceStatGraphic;
  Graphic LPieceStatGraphic;
  Graphic JPieceStatGraphic;
  Graphic SPieceStatGraphic;
  Graphic ZPieceStatGraphic;
  Graphic SquarePieceStatGraphic;
  Graphic nextTextGraphic;
  Graphic nextTetraGraphic;
  
  SDL_Rect* levelRect;
  SDL_Rect* pointsRect;
  SDL_Rect* linesRect;

};
#endif
