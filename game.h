#ifndef GAME_H
#define GAME_H

#include "user.h"

class Game {
private:
    std::string name;
public:
    Game(std::string name);
    std::string getName();
    virtual void play(User& user) = 0;
};

#endif
