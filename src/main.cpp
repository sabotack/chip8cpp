#include "SDL3/SDL_init.h"
#include "SDL3/SDL_log.h"
#include "SDL3/SDL_video.h"

#include <iostream>
#include <memory>
#include <ostream>

int main() {
    SDL_Window *window;
    bool done = false;

    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "Could not initialize SDL: " << SDL_GetError() << "\n";
    }

    window = SDL_CreateWindow("CHIP-8 Emulator", 640, 320, SDL_WINDOW_OPENGL);

    if (window == nullptr) {
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
        return 1;
    }

    while (!done) {
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                done = true;
            }
        }

        //LOGIC
    }

    SDL_DestroyWindow(window);
    SDL_Quit();
}
