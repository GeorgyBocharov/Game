//
// Created by george on 18.04.18.
//

#ifndef GAME_SPACECRAFT_H
#define GAME_SPACECRAFT_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio/Sound.hpp>
#include <SFML/Audio/SoundBuffer.hpp>
#include <SFML/Audio/Music.hpp>
#include "Base.h"

#define HEALTH_DEF 100
#define BONUS_NUM 3


class Spacecraft: public Base{
private:
    int health = HEALTH_DEF;
    bool bonus[BONUS_NUM] = {false};
    sf::Sprite view;
    sf::Sound  music;
public:
    void draw() override;
    void move() override;
    void logic() override;
    void bonus1();
    void bonus2();
    void bonus3();
};



#endif //GAME_SPACECRAFT_H
