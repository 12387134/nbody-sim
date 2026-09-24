#include "physics.hpp"
#include "renderer.hpp"
#include "types.hpp"
#include <vector>

int main() {
    nbody::Color _Color{255, 255, 255, 1};
    Server _Server{800, 600, _Color};
    //_Server.initialize("SDL!");

    nbody::Vector2D position{100, 200};
    std::println("{}", position);

    //if (!_Server.running()) {
        //return -1;
    //}

    //_Server.run();

    return 0;
}