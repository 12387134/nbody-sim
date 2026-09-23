#pragma once
#include <print>
#include <string>
#include "types.hpp"
#include <SDL3/SDL.h>
#include <SDL3/SDL_gpu.h>

class Server {
    int width{};
        int height{};
        bool active{};
        nbody::Color color{};
        SDL_Window* window{};
        SDL_GPUDevice* gpuDevice{};

    public:
        Server (int width, int height, nbody::Color color, bool active=true);
        ~Server();
        void initialize(std::string Title);
        void run();
        void end();
        bool running() const;
};