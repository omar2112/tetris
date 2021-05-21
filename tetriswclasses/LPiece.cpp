#include "LPiece.h"

LPiece::LPiece()
{
  color.r = 255;
  color.g = 165;
  color.b = 0;
  color.a = 255;

  coordinatesUp[0] = {0, 0};
  coordinatesUp[1] = {1, 0};
  coordinatesUp[2] = {1, 1};
  coordinatesUp[3] = {1, 2};

  coordinatesRight[0] = {0, 1};
  coordinatesRight[1] = {1, 1};
  coordinatesRight[2] = {2, 1};
  coordinatesRight[3] = {2, 0};

  coordinatesDown[0] = {1, 0};
  coordinatesDown[1] = {1, 1};
  coordinatesDown[2] = {1, 2};
  coordinatesDown[3] = {2, 2};

  coordinatesLeft[0] = {0, 1};
  coordinatesLeft[1] = {0, 2};
  coordinatesLeft[2] = {1, 1};
  coordinatesLeft[3] = {2, 1};

  placeState = State::Dropping;
  pieceRotation = Rotation::Down;
  pieceType = PieceType::L_Piece;
  startingY = 4;
  width = 4;

}

LPiece::~LPiece()
{
}

