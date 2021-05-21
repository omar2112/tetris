#include "TPiece.h"

TPiece::TPiece()
{
  color.r = 128;
  color.g = 0;
  color.b = 128;
  color.a = 255;

  coordinatesUp[0] = {0, 0};
  coordinatesUp[1] = {1, 0};
  coordinatesUp[2] = {-1, 0};
  coordinatesUp[3] = {0, -1};

  coordinatesRight[0] = {0, 0};
  coordinatesRight[1] = {1, 0};
  coordinatesRight[2] = {0, -1};
  coordinatesRight[3] = {0, 1};

  coordinatesDown[0] = {0, 0};
  coordinatesDown[1] = {-1, 0};
  coordinatesDown[2] = {1, 0};
  coordinatesDown[3] = {0, 1};

  coordinatesLeft[0] = {0, 0};
  coordinatesLeft[1] = {-1, 0};
  coordinatesLeft[2] = {0, -1};
  coordinatesLeft[3] = {0, 1};

  placeState = State::Dropping;

  
  pieceRotation = Rotation::Up;
  //  pieceRotation = Rotation::Right;
  pieceType = PieceType::T_Piece;

  startingY = 1;

  width = 3;

}



TPiece::~TPiece()
{
}
