NAME = nibbler

CC = clang++

CFLAGS = -Wall -Werror -Wextra -std=c++11

SRC = Snake.cpp Engine.cpp main.cpp Basegfx.cpp

LINUX_FLAGS = -lSDL2 -lSDL2_image -lSDL_image -lSDL2main -lGL

MAC_FLAGS = -framework OpenGL -framework SDL2 
#-framework SDL2_image -framework SDL_image
MAC2_FLAGS = `sdl-config --cflags --libs`
OBJ = $(SRC:*.cpp=%.o)

$(NAME):
	$(CC) $(CFLAGS) -shared -fPIC $(MAC_FLAGS) -I gfx/sdl2/ gfx/sdl2/sdl2.cpp -o lib1.so
	$(CC) $(CFLAGS)  $(SRC) -I gfx/sdl2/ $(MAC_FLAGS) -L . -l1 -o $(NAME)

all: $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re:
	fclean all