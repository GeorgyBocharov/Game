//
// Created by george on 18.04.18.
//

#ifndef GAME_BASE_H
#define GAME_BASE_H

#define pure = 0


class Base {
protected:
    double x = 0;
    double y = 0;
public:
    virtual void move() pure;
    virtual void draw() pure;
    virtual void logic() pure;
};


#endif //GAME_BASE_H
