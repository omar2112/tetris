#include "JPiece.h"

JPiece::JPiece()
{
  color.r = 0;
  color.g = 0;
  color.b = 128;
  color.a = 255;

  coordinatesUp[0] = {1, 0};
  coordinatesUp[1] = {2, 0};
  coordinatesUp[2] = {1, 1};
  coordinatesUp[3] = {1, 2};

  coordinatesRight[0] = {0, 1};
  coordinatesRight[1] = {1, 1};
  coordinatesRight[2] = {2, 1};
  coordinatesRight[3] = {2, 2};

  coordinatesDown[0] = {0, 2};
  coordinatesDown[1] = {1, 2};
  coordinatesDown[2] = {1, 1};
  coordinatesDown[3] = {1, 0};

  coordinatesLeft[0] = {0, 0};
  coordinatesLeft[1] = {0, 1};
  coordinatesLeft[2] = {1, 1};
  coordinatesLeft[3] = {2, 1};

  placeState = State::Dropping;
  pieceRotation = Rotation::Down;
  pieceType = PieceType::J_Piece;
  startingY = 4;
  width = 4;

}

JPiece::~JPiece()
{
}

