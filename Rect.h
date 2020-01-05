#pragma once
#include <graphics.h>
#include <winbgim.h>


class Rect{

private:
    int left,top,right,bottom;

public:
     int color;
    Rect(int otherLeft, int otherTop, int otherRight,int otherBottom, int otherColor)
    :
        left(otherLeft),
        top(otherTop),
        right(otherRight),
        bottom(otherBottom),
        color(otherColor)
    {};

    void Draw()
    {
        setcolor(color);
       rectangle(left, top,right,bottom);
    }

};


