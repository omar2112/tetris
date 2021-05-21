#include "TetraBase.h"

TetraBase::TetraBase()
{
  color.r = 255;
  color.g = 255;
  color.b = 255;
  color.a = 1;

  pieceName = "EmptyTetramino";

  placeState = State::Empty;
  pieceRotation = Rotation::Up;
  pieceType = PieceType::Empty;
}

TetraBase::~TetraBase()
{
}

bool TetraBase::isTetraPlaced()
{
  if (placeState == State::Placed) {
    return true;
  }
  return false;
}

SDL_Color TetraBase::getColor()
{
  return color;
}

std::string TetraBase::getName()
{
  return pieceName;
}

TetraBase::Coordinate* TetraBase::getCoordinates()
{
  if (pieceRotation == Rotation::Up) {
    return coordinatesUp;
  }
  if (pieceRotation == Rotation::Right) {
    return coordinatesRight;
  }
  if (pieceRotation == Rotation::Down) {
    return coordinatesDown;
  }
  if (pieceRotation == Rotation::Left) {
    return coordinatesLeft;
  }
  return coordinatesUp;
}

TetraBase::Rotation TetraBase::getRotation()
{
  return pieceRotation;
}

TetraBase::PieceType TetraBase::getPieceType()
{
  return pieceType;
}

TetraBase::State TetraBase::getPlaceState()
{
  return placeState;
}

void TetraBase::isDropping()
{
  placeState = State::Dropping;
}

void TetraBase::isPlaced()
{
  placeState = State::Placed;
}

void TetraBase::isNotPlaced()
{
  placeState = State::Dropping;
}

int TetraBase::getWidth()
{
  return width;
}

void TetraBase::rotateRight()
{
  if (pieceRotation == Rotation::Up) {
    pieceRotation = Rotation::Right;
  } else if (pieceRotation == Rotation::Right) {
    pieceRotation = Rotation::Down;
  } else if (pieceRotation == Rotation::Down) {
    pieceRotation = Rotation::Left;
  } else if (pieceRotation == Rotation::Left) {
    pieceRotation = Rotation::Up;
  }
}

void TetraBase::rotateLeft()
{
  if (pieceRotation == Rotation::Up) {
    pieceRotation = Rotation::Left;
  } else if (pieceRotation == Rotation::Left) {
    pieceRotation = Rotation::Down;
  } else if (pieceRotation == Rotation::Down) {
    pieceRotation = Rotation::Right;
  } else if (pieceRotation == Rotation::Right) {
    pieceRotation = Rotation::Up;
  }
}

