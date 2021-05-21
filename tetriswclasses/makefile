OBJS = tetris.cpp constants.cpp TetraBase.cpp TPiece.cpp LinePiece.cpp JPiece.cpp LPiece.cpp SPiece.cpp ZPiece.cpp SquarePiece.cpp Graphic.cpp Hud.cpp game.cpp

CC = g++

COMPILER_FLAGS = 

LINKER_FLAGS = -lSDL2 -lSDL2_image -lSDL2_ttf -lSDL2_mixer

OBJ_NAME = tetris

all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
