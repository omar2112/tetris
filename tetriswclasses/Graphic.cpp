#include "Graphic.h"

Graphic::Graphic() {
  textColor = {255, 255, 255, 1};

  if (TTF_Init() == -1) {
    printf("error loading SDL_ttf! %s", TTF_GetError());
    exit(2);
   }
  graphicFont = TTF_OpenFont("arcade.ttf", 22);
  if (!graphicFont) {
    printf("TTF_OpenFont: %s", TTF_GetError());
  }
}

Graphic::~Graphic()
{
  TTF_CloseFont(graphicFont);
  graphicFont = NULL;
  TTF_Quit();

}

void Graphic::setLocation(int rectX, int rectY)
{
  x = rectX;
  y = rectY;
}


void Graphic::render(SDL_Renderer* renderer) {

  SDL_Rect destRect = {x, y, width, height};
  SDL_RenderCopy(renderer, graphicTexture, NULL, &destRect);
}

void Graphic::initFont() {

}

void Graphic::loadGraphic(std::string textString, SDL_Renderer* renderer) {
  SDL_Surface* textSurface = TTF_RenderText_Solid(graphicFont, textString.c_str(), textColor);

  graphicTexture = SDL_CreateTextureFromSurface(renderer, textSurface);

  width = textSurface->w;
  height = textSurface->h;
}

void Graphic::free() {

}

int Graphic::getHeight() {
  return height;
}

int Graphic::getWidth() {
  return width;
}
