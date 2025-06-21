#include "sdl_context.h"

#include <stdexcept>

namespace display {
    sdl_context::sdl_context(SDL_InitFlags) {
        if (SDL_Init(SDL_INIT_VIDEO) < 0) {
            throw std::runtime_error("Could not initialize SDL");
        }
    }

    sdl_context::~sdl_context() {
        SDL_Quit();
    }
}
