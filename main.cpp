#include <iostream>
#include <graphics.h>
#include <winbgim.h>
#include "Brick.h"
#include "Player.h"
#include "Ball.h"
#define screenHeight 720
#define screenWidth 720
#define delta 10
bool gameStarted=false;
Brick grid=Brick();
Player p=Player(screenWidth/2-50,screenWidth/2+50,WHITE);
Ball b=Ball({screenWidth/2,screenHeight-55},20,GREEN);
using namespace std;
void Draw()
{
    grid.Draw();
    p.Draw();
    b.Draw();
}

void Bounce()
{
  if(b.center.second==screenHeight-55)
  {
  while(b.center.second>200)
  {
   b.Erase();
   b=Ball({b.center.first,b.center.second-10},20,GREEN);
   b.Draw();
   Sleep(50);
  }
  }

  if(b.center.second==200)
 {
  while(b.center.second<screenHeight-55)
  {
   b.Erase();
   b=Ball({b.center.first,b.center.second+10},20,GREEN);
   b.Draw();
   Sleep(50);

  }
 }
}

void Update()
{
   int c=getch();
   if(c)
   {
   gameStarted=true;
   switch(c)
   {
       case KEY_LEFT:
            p.Move((-1)*delta);
            break;
       case KEY_RIGHT:
            p.Move(delta);
            break;

   }
   p.Erase();
   p=Player(p.left,p.right,WHITE);
   p.Draw();
   }
}


int main()
{
    initwindow(screenWidth,screenHeight);
    Draw();
    while(1)
        {
        Update();
        if(gameStarted)
            Bounce();
        }
    getch();

    return 0;
}
