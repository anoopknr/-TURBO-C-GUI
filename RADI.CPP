/* Program To demonstrate Radiations
For More Details : https://github.com/anoopknr/-TURBO-C-GUI/ */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<stdlib.h>
void main()
{
    _setcursortype(_NOCURSOR);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    int d=396;
    cleardevice();
    setbkcolor(BLACK);
    setcolor(MAGENTA);
    setfillstyle(9,LIGHTGRAY);
    bar(300,460,360,480);
    rectangle(300,460,360,480);
    setfillstyle(11,YELLOW);
    setcolor(WHITE);
    fillellipse(330,465,5,5);
    bar(150,80,500,55);
    setcolor(CYAN);
    rectangle(150,80,500,55);
    setfillstyle(6,WHITE);
    bar(280,370,240,300);
    setcolor(GREEN);
    rectangle(280,370,240,300);
    bar(380,370,420,300);
    setcolor(RED);
    rectangle(380,370,420,300);
    settextstyle(1,0,4);
    setcolor(WHITE);
    outtextxy(163,10," RADIO ACTIVE RAYS ");
    setcolor(YELLOW);
    settextstyle(8,0,3);
    outtextxy(285,50,"Screen");
    settextstyle(1,0,5);
    setcolor(RED);
    outtextxy(390,305,"+");
    setcolor(GREEN);
    outtextxy(250,305,"-");
    settextstyle(21,0,1);
    outtextxy(90,380,"NEGATIVE ELECTRODE");
    setcolor(RED);
    outtextxy(430,380,"POSITIVE ELECTRODE");
    setcolor(YELLOW);
    outtextxy(370,470,"PLUTONIUM KEPT IN LEAD BOX ");
    setcolor(LIGHTGRAY);
    outtextxy(200,415,"RADIATION EMMITED FROM PLUTONIUM ");
    setfillstyle(1,RED);
    fillellipse(520,150,6,6);
    setcolor(RED);
    outtextxy(538,147,"ALPHA RAYS");
    setfillstyle(1,WHITE);
    fillellipse(520,190,6,6);
    setcolor(WHITE);
    outtextxy(538,187,"GAMA RAYS");
    setfillstyle(1,GREEN);
    fillellipse(520,230,6,6);
    setcolor(GREEN);
    outtextxy(538,227,"BETA RAYS");
    for(int j=460; j>401; j--)
    {
        setcolor(WHITE);
        line(330,460,330,j);
        delay(30);
    }
    for(int i=0; i<91; i++)
    {
        setcolor(RED);
        ellipse(170,400,0,i,160,320);
        setcolor(GREEN);
        ellipse(490,400,180-i,180,160,320);
        setcolor(WHITE);
        if(d>80)
        {
            line(330,420,330,d);
            if(d>240)
                d-=5;
            else
                d-=4;
        }
        delay(130);
    }
    line(330,460,330,80);
    getch();
    cleardevice();
    closegraph();
}
