#ifndef GRAPHIC_H
#define GRAPHIC_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <sstream>

class Graphic {
 public:
  Graphic();
  ~Graphic();
  void render(SDL_Renderer* renderer);
  void initFont();
  void loadGraphic(std::string textString, SDL_Renderer* renderer);
  void free();
  int getWidth();
  int getHeight();
  void setLocation(int rectX, int rectY);
 private:
  SDL_Texture* graphicTexture;
  int width;
  int height;
  int x;
  int y;
  TTF_Font* graphicFont;
  SDL_Color textColor;

};
#endif
