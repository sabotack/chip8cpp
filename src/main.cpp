#include "chip8/emulator.hpp"
#include "display/sdl_context.h"

int main() {
    bool done = false;

    auto sdl_ctx = display::sdl_context();
    auto emulator = chip8::emulator();

    while (!done) {
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                done = true;
            }
        }

        //LOGIC
    }

}
