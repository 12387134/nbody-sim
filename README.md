# N-Body Physics Simulation

This project is a Astrophysics Simulation which computes the behavior between many different bodies in outerspace, such as Debris, Planets, Stars in real-time


## Status

This project is currently in active development.

**Completed.**

* Custom Linear Algebra microlibrary to handle 2D vector operations
* SDL3 Window Creation & SDL3 GPU boilerplate setup

**In-Progress.**

* SDL3 GPU Rendering
* Mechanics (Force, Gravity, Acceleration, Collision)
* Celestial Bodies (Planets, Stars, Debris, Satellites)
* Verlet Integration
* Barnes Hut Algorithm


## Project Stack. 

* Build System. CMake
* Graphics API. SDL3 GPU
* Language. C++


## Build Instructions

Ensure you have *CMake and SDL3* installed before compilation, then run the following commands.

```bash
rm -rf build
cmake -S . -B build
cmake --build build
./build/nbody-sim
```