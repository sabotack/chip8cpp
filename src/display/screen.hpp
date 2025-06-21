#pragma once

#include <string>

#include "SDL3/SDL_render.h"
#include "SDL3/SDL_video.h"

namespace display {
    class screen {
    public:
        screen(const std::string &title, int width, int height);
        ~screen();

        void clear();
        void render();

    private:
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
    };
}
