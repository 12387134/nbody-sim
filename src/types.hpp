#pragma once
#include <format>
#include <string>
#include <print>
#include <cmath>

namespace nbody {

    enum class Celestial {
        Debris,
        Satellite,
        Dwarf,
        Planet,
        Star,
        BlackHole
    };

    template <typename N>
    struct Vector2D {
        N x{};
        N y{};

        Vector2D(N x, N y) : x{x}, y{y} {}

        // Vector to Vector Operations (Operation + Assignment)

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

        Vector2D& operator*=(const Vector2D other) {
            this->x *= other.x;
            this->y *= other.y;
            return *this;
        }

        Vector2D& operator/=(const Vector2D other) {
            this->x /= other.x;
            this->y /= other.y;
            return *this;
        }

        // Vector to Vector Operations (Operation Only)

        Vector2D operator+(const Vector2D other) const {
            return Vector2D {
            this->x + other.x,
            this->y + other.y
            };
        }

        Vector2D operator-(const Vector2D other) const {
            return Vector2D {
            this->x - other.x,
            this->y - other.y
            };
        }

        Vector2D operator+(const Vector2D other) const {
            return Vector2D {
            this->x * other.x,
            this->y * other.y
            };
        }

        Vector2D operator+(const Vector2D other) const {
            return Vector2D {
            this->x / other.x,
            this->y / other.y
            };
        }


        // Vector to Scalar Operations (Operation + Assignment)

        Vector2D& operator+=(const N other) {
            this->x += other;
            this->y += other;
            return *this;
        }

        Vector2D& operator-=(const N other) {
            this->x -= other;
            this->y -= other;
            return *this;
        }

        Vector2D& operator*=(const N other) {
            this->x *= other;
            this->y *= other;
            return *this;
        }

        Vector2D& operator/=(const N other) {
            this->x /= other;
            this->y /= other;
            return *this;
        }

        // Vector to Scalar Operations (Operation Only)

        Vector2D operator+(const N other) const {
            return Vector2D {
            this->x + other.x,
            this->y + other.y
            };
        }

        Vector2D operator-(const N other) const {
            return Vector2D {
            this->x - other.x,
            this->y - other.y
            };
        }

        Vector2D operator*(const N other) const {
            return Vector2D {
            this->x * other.x,
            this->y * other.y
            };
        }

        Vector2D operator/(const N other) const {
            return Vector2D {
            this->x / other.x,
            this->y / other.y
            };
        }

        // Vector Methods

        T magnitudeSquared() const {
            return x * x + y * y;
        }

        T magnitude() const {
            return std::sqrt(x * x + y * y);
        }

        Vector2D normalize() const {
            return *this / magnitude();
        }

        T dotProduct(const Vector2D& other) const {
            return (this->x * other.x) + (this->y * other.y);
        }

        T distanceSquared(const Vector2D& other) const {
            return (*this - other).magnitudeSquared()
        }

        T distance(const Vector2D& other) const {
            return (*this - other).magnitude()
        }

    };

    template <typename N> 
    Vector2D<N> operator*(N other, const Vector2D<N>& vector) {
        return vector * other;
    }

    struct Color {
        int r{};
        int g{};
        int b{};
        float a{};

        Color(int r = 0, int g = 0, int b = 0, float a = 1.0f) : r{r}, g{g}, b{b}, a{a} {}

    };

}

template <typename F>
    struct std::formatter<nbody::Vector2D<F>> : std::formatter<std::string> {
        auto format(const nbody::Vector2D<F>& vector, auto& ctx) const {
            return std::format_to(
            ctx.out(),
            "({}, {})",
            vector.x,
            vector.y
            );
        }
    };
