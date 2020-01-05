#pragma once
#include <graphics.h>
#include <winbgim.h>
#include "Rect.h"
#include <vector>

class Brick{
private:
    std::vector<Rect> grid;
public:
    Brick()
    {
       for(auto i=0;i<4;i++)
            for(auto j=0;j<7;j++)
            {
              Rect r=Rect(j*100,i*50,(j+1)*100,(i+1)*50,RED);
              grid.push_back(r);
            }
    }

    void Draw()
    {
        for(auto elem:grid)
            elem.Draw();
    }

};
