#include "game.h"

Game::Game(std::string name) {
    this->name = name;
}

std::string Game::getName() {
    return name;
}
