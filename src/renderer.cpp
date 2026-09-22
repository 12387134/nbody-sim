#include "renderer.hpp"

Server::Server(int width, int height, nbody::Color color, bool active=true) : width{width}, height{height}, color{color}, active{active} {}

void Server::initialize() {};
void Server::run() {};
void Server::end() {};
bool Server::running() const {};

Server::~Server() {};