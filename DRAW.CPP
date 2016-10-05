/* Program To Demonstrate Pencil tool
For More Details : https://github.com/anoopknr/-TURBO-C-GUI/ */
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
int initmouse();
void restrictmouseptr(int,int,int,int);
void showmouseptr();
void getmousepos(int*,int*,int*);
union REGS i,o;
void main()
{
    int gd=DETECT,gm,maxx,maxy,x,y,button;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    maxx=getmaxx();
    maxy=getmaxy();
    rectangle(0,56,maxx,maxy);
    setviewport(1,57,maxx-1,maxy-1,1);
    gotoxy(26,1);
    printf("Pencil Demonstration Program ");
    if(initmouse()==0)
    {
        closegraph();
        restorecrtmode();
        printf("\n Mouse Driver Not Loaded ");
        exit(1);
    }
    restrictmouseptr(1,57,(maxx-1),(maxy-1));
    showmouseptr();
    while(!kbhit())
    {
        getmousepos(&button,&x,&y);
        if(button&1==1)
        {
            fillellipse(x,y-40,2,2);
        }
    }
}
int initmouse()
{
    i.x.ax=0;
    int86(0x33,&i,&o);
    return(o.x.ax);
}
void showmouseptr()
{
    i.x.ax=1;
    int86(0x33,&i,&o);
}
void restrictmouseptr(int x1,int y1,int x2,int y2)
{
    i.x.ax=7;
    i.x.cx=x1;
    i.x.dx=x2;
    int86(0x33,&i,&o);
    i.x.ax=8;
    i.x.cx=y1;
    i.x.dx=y2;
    int86(0x33,&i,&o);
}
void getmousepos(int *button,int *x,int *y)
{
    i.x.ax=3;
    int86(0x33,&i,&o);
    *button=o.x.bx;
    *x=o.x.cx;
    *y=o.x.dx;
}
