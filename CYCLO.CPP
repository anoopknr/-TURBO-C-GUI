#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
    char option;
    int x=401,y=245,r=5,a=0,i,l;
    _setcursortype(_NOCURSOR);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    cleardevice();
    setbkcolor(BLACK);
    setfillstyle(11,LIGHTGRAY);
    sector(382,245,90,270,190,168);
    sector(422,245,270,360,190,168);
    sector(422,245,0,90,190,168);
    setfillstyle(9,CYAN);
    setcolor(RED);
    bar(455,83,400,65);//reflector
    rectangle(455,83,400,65);
    setcolor(YELLOW);
    line(400,245,431,248);
    setfillstyle(1,RED);
    fillellipse(401,245,5,5);//source
    setfillstyle(9,GREEN);
    bar(0,68,13,107);//target
    setcolor(RED);
    rectangle(0,68,13,107);
    setcolor(YELLOW);
    while(a<6220)
    {
        ellipse(x,y,a-40,a,r+35,r);
        r++;
        a+=40;
        delay(95);
    }
    for(l=0; l<423; l+=3)
    {
        line(433,87,433-l,87);
        delay(6);
    }
    getch();
    cleardevice();
    closegraph();
}
