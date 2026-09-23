#include <print>
#include "physics.hpp"
#include "renderer.hpp"
#include "types.hpp"
#include <vector>

int main() {
    nbody::Color _Color{255, 255, 255, 1};
    Server _Server{800, 600, _Color};
    _Server.initialize("SDL!");
    _Server.run();

    return 0;
}