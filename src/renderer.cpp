#include "renderer.hpp"

Server::Server(int width, int height, nbody::Color color, bool active) : width{width}, height{height}, color{color}, active{active} {}

void Server::initialize(std::string Title) {
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        std::println("{}", SDL_GetError());
        active = false;
        return;
    }

    window = SDL_CreateWindow (
        Title.c_str(),
        width,
        height,
        0
    );

    if (window == nullptr) {
        std::println("{}", SDL_GetError());
        active = false;
        return;
    }

    gpuDevice = SDL_CreateGPUDevice(
        SDL_GPU_SHADERFORMAT_SPIRV | SDL_GPU_SHADERFORMAT_DXIL | SDL_GPU_SHADERFORMAT_MSL,
        false,
        nullptr
    );

    if (gpuDevice == nullptr) {
        std::println("{}", SDL_GetError());
        end();
        return;
    }

    if (!SDL_ClaimWindowForGPUDevice(gpuDevice, window)) {
        std::println("{}", SDL_GetError());
        end();
        return;
    }

}

void Server::end() {
    active = false;
}

void Server::run() {

    while (active) {
        SDL_Event event;
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_EVENT_QUIT: 
                    end(); 
                    break;
                
            }
        }

    }
}

bool Server::running() const {
    return active;
}

Server::~Server() {
    SDL_DestroyGPUDevice(gpuDevice);
    SDL_DestroyWindow(window);
    SDL_Quit();
}