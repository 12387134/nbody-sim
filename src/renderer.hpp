#pragma once
#include "types.hpp"
#include <SDL3/SDL.h>

class Server {
    int width{};
        int height{};
        bool active{};
        nbody::Color color{255, 255, 255};
        SDL_Window* window{};
        SDL_Renderer* renderer{};

    public:
        Server (int width, int height, nbody::Color color, bool active=true);
        ~Server();
        void initialize();
        void run();
        void end();
        bool running() const;
};