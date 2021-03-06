#ifndef BASEGFX_HPP
# define BASEGFX_HPP

#include <iostream>
#include <dlfcn.h>
//#include "Engine.hpp"

class Basegfx
{

public:
    Basegfx() {};
    virtual ~Basegfx() {};

    virtual void init(unsigned int &maxW, unsigned int &maxH) = 0;
    virtual void render() = 0;
    //virtual int input(int &dir, int &lib) = 0;
};

typedef Basegfx* create_t();
typedef void destroy_t(Basegfx*);

#endif