#ifndef SDL2_HPP
# define SDL2_HPP

#ifdef APPLE
    #include <SDL2/SDL.h>
    #include <OpenGL/gl.h>
#else
    #include <SDL2/SDL.h>
    #include <GL/gl.h>
#endif

#include <iostream>
#include <sstream>
#include "../../Basegfx.hpp"

class sdl2 : public Basegfx
{
private:
    int     _maxW;
    int     _maxH;
    //int     _rand;

    SDL_Window      *_window;
    SDL_Renderer    *_renderer;
    //SDL_Event       _event; // key input

public:
    sdl2();
    sdl2(unsigned int w, unsigned h);
    sdl2(sdl2 const &rhs);
    ~sdl2();
    sdl2 &operator=(sdl2 const &rhs);

    void init(unsigned int &maxW, unsigned int &maxH);

    int getW() const;
    int getH() const;
    
};

#endif