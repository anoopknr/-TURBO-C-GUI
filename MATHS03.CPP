#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int driver=DETECT,mode;
    initgraph(&driver,&mode,"c:\\TURBOC3\\BGI");
    int x,y,z,i;
    while(!kbhit())
    {
        z=150*sin(((i*2.7614)*3.141592)/30);
        x=z*cos(((i*2.7614)*3.141592)/180);
        y=z*sin(((i*2.7614)*3.141592)/180);
        putpixel(x+300,y+200,RED);
        i++;
        delay(2);
    }
}
