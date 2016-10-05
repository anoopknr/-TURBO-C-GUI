/* Program To demonstrate Mathematic curves
For More Details : https://github.com/anoopknr/-TURBO-C-GUI/ */
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
#include<stdlib.h>
main()
{
    int driver=DETECT,mode;
    initgraph(&driver,&mode,"c:\\TURBOC3\\BGI");
    int x,y,z,i=0;
    while(!kbhit())
    {
        z=80*(1+cos((i*3.14159)/180));
        x=z*cos(((i*2.7614)*3.141592)/180);
        y=z*sin(((i*2.7614)*3.141592)/180);
        putpixel(x+300,y+250,RED);
        i++;
        delay(3);
    }
}
