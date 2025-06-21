#pragma once

#include "SDL3/SDL_init.h"

namespace display {
    class sdl_context {
    public:
        explicit sdl_context(SDL_InitFlags = SDL_INIT_VIDEO);
        ~sdl_context();
    };
}
