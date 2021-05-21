#include "SPiece.h"

SPiece::SPiece()
{
  color.r = 0;
  color.g = 100;
  color.b = 0;
  color.a = 255;

  coordinatesUp[0] = {1, 0};
  coordinatesUp[1] = {1, 1};
  coordinatesUp[2] = {2, 1};
  coordinatesUp[3] = {2, 2};

  coordinatesRight[0] = {0, 2};
  coordinatesRight[1] = {1, 2};
  coordinatesRight[2] = {1, 1};
  coordinatesRight[3] = {2, 1};

  coordinatesDown[0] = {1, 0};
  coordinatesDown[1] = {1, 1};
  coordinatesDown[2] = {2, 1};
  coordinatesDown[3] = {2, 2};

  coordinatesLeft[0] = {0, 2};
  coordinatesLeft[1] = {1, 2};
  coordinatesLeft[2] = {1, 1};
  coordinatesLeft[3] = {2, 1};

  placeState = State::Dropping;
  pieceRotation = Rotation::Left;
  pieceType = PieceType::S_Piece;
  startingY = 4;
  width = 4;

}

SPiece::~SPiece()
{
}

