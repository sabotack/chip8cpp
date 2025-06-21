#include "screen.hpp"
#include <iostream>

namespace display {
    screen::screen(const std::string &title, const int width, const int height) {
        m_window = SDL_CreateWindow(title.c_str(), width, height, SDL_WINDOW_OPENGL);
        if (!m_window) {
            throw std::runtime_error("Failed to create SDL_Window");
        }

        m_renderer = SDL_CreateRenderer(m_window, nullptr);
        if (!m_renderer) {
            SDL_DestroyWindow(m_window);
            throw std::runtime_error("Failed to create SDL_Renderer");
        }

        m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STREAMING, 64, 32);
        if (!m_texture) {
            SDL_DestroyWindow(m_window);
            SDL_DestroyRenderer(m_renderer);
            throw std::runtime_error("Failed to create SDL_Texture");
        }
    }

    screen::~screen() {
        if (m_window)
            SDL_DestroyWindow(m_window);
        if (m_renderer)
            SDL_DestroyRenderer(m_renderer);
        if (m_texture)
            SDL_DestroyTexture(m_texture);
    }
}
