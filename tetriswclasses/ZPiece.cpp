#include "ZPiece.h"

ZPiece::ZPiece()
{
  color.r = 255;
  color.g = 0;
  color.b = 0;
  color.a = 255;

  coordinatesUp[0] = {2, 0};
  coordinatesUp[1] = {2, 1};
  coordinatesUp[2] = {1, 1};
  coordinatesUp[3] = {1, 2};

  coordinatesRight[0] = {0, 1};
  coordinatesRight[1] = {1, 1};
  coordinatesRight[2] = {1, 2};
  coordinatesRight[3] = {2, 2};

  coordinatesDown[0] = {2, 0};
  coordinatesDown[1] = {2, 1};
  coordinatesDown[2] = {1, 1};
  coordinatesDown[3] = {1, 2};

  coordinatesLeft[0] = {0, 1};
  coordinatesLeft[1] = {1, 1};
  coordinatesLeft[2] = {1, 2};
  coordinatesLeft[3] = {2, 2};

  placeState = State::Dropping;
  pieceRotation = Rotation::Left;
  pieceType = PieceType::Z_Piece;
  startingY = 4;
  width = 4;
}



ZPiece::~ZPiece()
{
}
