#pragma once
#include <graphics.h>
#include <winbgim.h>

class Ball{

private:
    int radius;
public:
    std::pair<int,int> center;
    int color;
    Ball(std::pair<int,int>otherCenter, int otherRadius, int otherColor)
    :
        center(otherCenter),
        radius(otherRadius),
        color(otherColor)
    {};


    void Draw()
    {
        setcolor(color);
        setfillstyle(SOLID_FILL,color);
        fillellipse(center.first,center.second,radius,radius);
    }

    void Erase()
    {
        color=BLACK;
        Draw();

    }


};
