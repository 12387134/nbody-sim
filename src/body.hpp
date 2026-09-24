#pragma once
#include "types.hpp"

class Body {
    private:
        nbody::Celestial classification{};
        nbody::Vector2D<double> position{};
        nbody::Vector2D<double> velocity{};
        double mass{};
        double radius{};
        float density{}; 
        nbody::Color color{};
    public:
};