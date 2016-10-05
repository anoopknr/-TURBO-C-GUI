/* Program To draw Rubes CuBe
For More Details : https://github.com/anoopknr/-TURBO-C-GUI/ */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<process.h>
#include<graphics.h>
#include<stdlib.h>
void rotate(int pos,int colorcube[54])
{
    int arr[3],i,pass;
    if(pos==0)
    {
        for(pass=0; pass<57; pass++)
        {
            if(pass<9)
                colorcube[pass]=1;
            else if(pass<18)
                colorcube[pass]=2;
            else if(pass<27)
                colorcube[pass]=14;
            else if(pass<36)
                colorcube[pass]=4;
            else if(pass<45)
                colorcube[pass]=15;
            else if(pass<56)
                colorcube[pass]=13;
        }
    }
    if(pos==1)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[9+(i*3)];
            colorcube[9+(i*3)]=colorcube[18+i];
            colorcube[18+i]=colorcube[29+(i*3)];
            colorcube[29+(i*3)]=colorcube[47+(i*3)];
            colorcube[47+(i*3)]=arr[i];
        }
        for(i=0; i<2; i++)
        {
            arr[i]=colorcube[0+i];
            colorcube[0+i]=colorcube[2+(i*3)];
            colorcube[2+(i*3)]=colorcube[8-i];
            colorcube[8-i]=colorcube[6-(i*3)];
            colorcube[6-(i*3)]=arr[i];
        }
    }
    if(pos==2)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[10+(i*3)];
            colorcube[10+(i*3)]=colorcube[21+i];
            colorcube[21+i]=colorcube[28+(i*3)];
            colorcube[28+(i*3)]=colorcube[46+(i*3)];
            colorcube[46+(i*3)]=arr[i];
        }
    }
    if(pos==3)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[11+(i*3)];
            colorcube[11+(i*3)]=colorcube[24+i];
            colorcube[24+i]=colorcube[27+(i*3)];
            colorcube[27+(i*3)]=colorcube[45+(i*3)];
            colorcube[45+(i*3)]=arr[i];
        }
        for(i=0; i<2; i++)
        {
            arr[i]=colorcube[38+(i*3)];
            colorcube[38+(i*3)]=colorcube[44-i];
            colorcube[44-i]=colorcube[42-(i*3)];
            colorcube[42-(i*3)]=colorcube[36+i];
            colorcube[36+i]=arr[i];
        }
    }
    if(pos==4)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[0+(i*3)];
            colorcube[0+(i*3)]=colorcube[18+(i*3)];
            colorcube[18+(i*3)]=colorcube[38+(i*3)];
            colorcube[38+(i*3)]=colorcube[51+i];
            colorcube[51+i]=arr[i];
        }
        for(i=0; i<2; i++)
        {
            arr[i]=colorcube[11+(i*3)];
            colorcube[11+(i*3)]=colorcube[17-i];
            colorcube[17-i]=colorcube[15-(i*3)];
            colorcube[15-(i*3)]=colorcube[9+i];
            colorcube[9+i]=arr[i];
        }
    }
    if(pos==5)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[1+(i*3)];
            colorcube[1+(i*3)]=colorcube[19+(i*3)];
            colorcube[19+(i*3)]=colorcube[37+(i*3)];
            colorcube[37+(i*3)]=colorcube[48+i];
            colorcube[48+i]=arr[i];
        }
    }
    if(pos==6)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[2+(i*3)];
            colorcube[2+(i*3)]=colorcube[20+(i*3)];
            colorcube[20+(i*3)]=colorcube[36+(i*3)];
            colorcube[36+(i*3)]=colorcube[45+i];
            colorcube[45+i]=arr[i];
        }
        for(i=0; i<2; i++)
        {
            arr[i]=colorcube[27+i];
            colorcube[27+i]=colorcube[29+(i*3)];
            colorcube[29+(i*3)]=colorcube[35-i];
            colorcube[35-i]=colorcube[33-(i*3)];
            colorcube[33-(i*3)]=arr[i];
        }
    }
    if(pos==7)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[0+i];
            colorcube[0+i]=colorcube[9+i];
            colorcube[9+i]=colorcube[33+i];
            colorcube[33+i]=colorcube[42+i];
            colorcube[42+i]=arr[i];
        }
        for(i=0; i<2; i++)
        {
            arr[i]=colorcube[24+i];
            colorcube[24+i]=colorcube[26-(i*3)];
            colorcube[26-(i*3)]=colorcube[20-i];
            colorcube[20-i]=colorcube[18+(i*3)];
            colorcube[18+(i*3)]=arr[i];
        }
    }
    if(pos==8)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[3+i];
            colorcube[3+i]=colorcube[12+i];
            colorcube[12+i]=colorcube[30+i];
            colorcube[30+i]=colorcube[39+i];
            colorcube[39+i]=arr[i];
        }
    }
    if(pos==9)
    {
        for(i=0; i<3; i++)
        {
            arr[i]=colorcube[6+i];
            colorcube[6+i]=colorcube[15+i];
            colorcube[15+i]=colorcube[27+i];
            colorcube[27+i]=colorcube[36+i];
            colorcube[36+i]=arr[i];
        }
        for(i=0; i<2; i++)
        {
            arr[i]=colorcube[51+i];
            colorcube[51+i]=colorcube[53-(i*3)];
            colorcube[53-(i*3)]=colorcube[47-i];
            colorcube[47-i]=colorcube[45+(i*3)];
            colorcube[45+(i*3)]=arr[i];
        }
    }
}
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
    int x1=300;
    cleardevice();
    setfillstyle(9,GREEN);
    int colorcube[56];
    int poly[56][8]=
    {
        {200,200,243,178,243,228,200,250},
        {243,178,286,156,286,206,243,228},
        {286,156,329,134,329,184,286,206},
        {200,250,243,228,243,278,200,300},
        {243,228,286,206,286,256,243,278},
        {286,206,329,184,329,234,286,256},
        {200,300,243,278,243,328,200,350},
        {243,278,286,256,286,306,243,328},
        {286,256,329,234,329,284,286,306},
        {200,200,200,250,157,228,157,178},
        {157,178,157,228,114,206,114,156},
        {114,156,114,206,71,184,71,134},
        {200,250,200,300,157,278,157,228},
        {157,228,157,278,114,256,114,206},
        {114,206,114,256,71,234,71,184},
        {200,300,200,350,157,328,157,278},
        {157,278,157,328,114,306,114,256},
        {114,256,114,306,71,284,71,234},
        {200,200,243,178,200,156,157,178},
        {243,134,286,156,243,178,200,156},
        {243,134,286,156,329,134,286,112},
        {157,178,200,156,157,134,114,156},
        {157,134,200,156,243,134,200,112},
        {200,112,243,134,286,112,243,90},
        {71,134,114,156,157,134,114,112},
        {114,112,157,134,200,112,157,90},
        {157,90,200,112,243,90,200,68},
        {200+x1,200,243+x1,178,243+x1,228,200+x1,250},
        {243+x1,178,286+x1,156,286+x1,206,243+x1,228},
        {286+x1,156,329+x1,134,329+x1,184,286+x1,206},
        {200+x1,250,243+x1,228,243+x1,278,200+x1,300},
        {243+x1,228,286+x1,206,286+x1,256,243+x1,278},
        {286+x1,206,329+x1,184,329+x1,234,286+x1,256},
        {200+x1,300,243+x1,278,243+x1,328,200+x1,350},
        {243+x1,278,286+x1,256,286+x1,306,243+x1,328},
        {286+x1,256,329+x1,234,329+x1,284,286+x1,306},
        {200+x1,200,200+x1,250,157+x1,228,157+x1,178},
        {157+x1,178,157+x1,228,114+x1,206,114+x1,156},
        {114+x1,156,114+x1,206,71+x1,184,71+x1,134},
        {200+x1,250,200+x1,300,157+x1,278,157+x1,228},
        {157+x1,228,157+x1,278,114+x1,256,114+x1,206},
        {114+x1,206,114+x1,256,71+x1,234,71+x1,184},
        {200+x1,300,200+x1,350,157+x1,328,157+x1,278},
        {157+x1,278,157+x1,328,114+x1,306,114+x1,256},
        {114+x1,256,114+x1,306,71+x1,284,71+x1,234},
        {200+x1,200,243+x1,178,200+x1,156,157+x1,178},
        {243+x1,134,286+x1,156,243+x1,178,200+x1,156},
        {243+x1,134,286+x1,156,329+x1,134,286+x1,112},
        {157+x1,178,200+x1,156,157+x1,134,114+x1,156},
        {157+x1,134,200+x1,156,243+x1,134,200+x1,112},
        {200+x1,112,243+x1,134,286+x1,112,243+x1,90},
        {71+x1,134,114+x1,156,157+x1,134,114+x1,112},
        {114+x1,112,157+x1,134,200+x1,112,157+x1,90},
        {157+x1,90,200+x1,112,243+x1,90,200+x1,68}
    };
    int pass;
    for(pass=0l; pass<57; pass++)
    {
        if(pass<9)
            colorcube[pass]=1;
        else if(pass<18)
            colorcube[pass]=2;
        else if(pass<27)
            colorcube[pass]=14;
        else if(pass<36)
            colorcube[pass]=4;
        else if(pass<45)
            colorcube[pass]=15;
        else if(pass<56)
            colorcube[pass]=13;
    }
    for(pass=0; pass<56; pass++)
    {
        setfillstyle(1,colorcube[pass]);
        fillpoly(4,poly[pass]);
    }
    char op=getch();
    while(op!='x')
    {
        rotate(op-'0',colorcube);
        for(pass=0; pass<56; pass++)
        {
            setfillstyle(1,colorcube[pass]);
            fillpoly(4,poly[pass]);
        }
        op=getch();
    }
}
