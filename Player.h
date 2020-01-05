#pragma once
#include "Rect.h"
#define screenHeight 720
#define screenWidth 720



class Player{
private:
    int top=screenHeight-55,bottom=screenHeight-5;
public:
    int left,right;
    int color;
    Rect shooter;
    Player(int otherLeft,int otherRight,int otherColor)
    :
        left(otherLeft),
        right(otherRight),
        color(otherColor),
        shooter(left,top,right,bottom,color)
    {};
    void Draw()
    {
        shooter.Draw();
    }

    void Move(int delta)
    {
        left+=delta;
        right+=delta;
    }
    void Erase()
    {
         shooter.color=BLACK;
         shooter.Draw();
    }
};
