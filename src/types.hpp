#pragma once

namespace nbody {

    enum class Celestial {
        Debris,
        Satellite,
        Dwarf,
        Planet,
        Star,
        BlackHole
    };

    template <typename N, typename Scalar>
    struct Vector2D {
        N x{};
        N y{};

        Vector2D(N x, N y) : x{x}, y{y} {}

        Vector2D& operator+=(const Vector2D other) {
            this->x += other.x;
            this->y += other.y;
            return *this;
        }

        Vector2D& operator-=(const Vector2D other) {
            this->x -= other.x;
            this->y -= other.y;
            return *this;
        }

        Vector2D& operator+=(const <Scalar> other) {
            this->x += other;
            this->y += other;
            return *this;
        }

        Vector2D& operator-=(const <Scalar> other) {
            this->x -= other;
            this->y -= other;
            return *this;
        }

        // write multiplication and division implementations

    };

    struct Color {
        int r{};
        int g{};
        int b{};
        float a{};

        Color(int r = 0, int g = 0, int b = 0, float a = 1.0f) : r{r}, g{g}, b{b}, a{a} {}

    };

}

