#include <iostream>
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<bits/stdc++.h>
//#define pdd pair<double,double>

int main()
{
   int gm=DETECT,gd;

  // initgraph(&gm,&gd,"");

   initwindow(getmaxwidth( ), getmaxheight( ));
    //rectangle(100,100,500,400);
    line(100,50,400,50);
    line(400,50,400,300);
    line(400,300,100,300);
    line(100,50,100,300);
    int x1,y1,x2,y2;

    printf("Enter the 4 points inside the clipping window\n");
    printf("keep values of x1 & y1 are small enough as compared to x2 and y2\nthese is the only sample program not finale.......\n ");
    printf("x1:");
    scanf("%d",&x1);
    printf("y1:");
    scanf("%d",&y1);
    printf("x2:");
    scanf("%d",&x2);
    printf("y2:");
    scanf("%d",&y2);
    line(x1,y1,x2,y2);

    if(x1>=100 && x1<=400 && y1>=50 && y1<=300)
    {
        if(x2>=100 && x2<=400 && y2>=50 && y2<=300)
        {
            outtextxy(550,50,"the line is inside the clipping window ");
            outtextxy(550,70,"press any key to exit");

            getch();
            exit(0);

        }
    }
    else
    {
         if(y1<=50 && y2<=50)
        {
            outtextxy(650,50,"the line is top of the clipping window");
            outtextxy(550,70,"press any key to exit");

            getch();
            exit(0);
        }
        if(y1>=300 && y2>=300)
        {
            outtextxy(650,50,"the line is bottom of the clipping window");
            outtextxy(550,70,"press any key to exit");

            getch();
            exit(0);
        }
        if(x1<=100 && x2<=100)
        {
            outtextxy(650,50,"the line is left of the clipping window");
            outtextxy(550,70,"press any key to exit");

            getch();
            exit(0);
        }
        if(x1>=400 && x2>=400)
        {
            outtextxy(650,50,"the line is right of the clipping window");
            outtextxy(550,70,"press any key to exit");

            getch();
            exit(0);
        }

    }
outtextxy(650,50,"we should cut down the line");
outtextxy(650,70,"press any key to cut the line");
getch();
int slope=0,a1,b1,c1,a2,b2,c2,m,n,d,m1,n1,m2,n2,m3,n3;
//pdd a=make_pair(x1,y1);
if(y2>300 || y1>300)
{
    setcolor(BLACK);
    line(x1,y1,x2,y2);
    a1=y2-y1;
    b1=x1-x2;
    c1=a1*(x1)+b1*(y1);

    a2=300-300;
    b2=100-400;
    c2=a2*(100)+b2*(300);

    d=a1*b2-a2*b1;
    m=(b2*c1-b1*c2)/d;
    n=(a1*c2-a2*c1)/d;

    setcolor(WHITE);

}
if(y2<50 || y1<50)
{
    setcolor(BLACK);
    line(x1,y1,x2,y2);
    a1=y2-y1;
    b1=x1-x2;
    c1=a1*(x1)+b1*(y1);

    a2=300-300;
    b2=100-400;
    c2=a2*(100)+b2*(50);

    d=a1*b2-a2*b1;
    m2=(b2*c1-b1*c2)/d;
    n2=(a1*c2-a2*c1)/d;

    setcolor(WHITE);

}

if(x2<100 || x1<100)
{
    setcolor(BLACK);
    line(x1,y1,x2,y2);
    a1=y2-y1;
    b1=x1-x2;
    c1=a1*(x1)+b1*(y1);

    a2=300-50;
    b2=100-100;
    c2=a2*(100)+b2*(300);

    d=a1*b2-a2*b1;
    m1=(b2*c1-b1*c2)/d;
    n1=(a1*c2-a2*c1)/d;

}
if(x2>400 || x1>400)
{
    setcolor(BLACK);
    line(x1,y1,x2,y2);
    a1=y2-y1;
    b1=x1-x2;
    c1=a1*(x1)+b1*(y1);

    a2=300-50;
    b2=100-100;
    c2=a2*(400)+b2*(300);

    d=a1*b2-a2*b1;
    m3=(b2*c1-b1*c2)/d;
    n3=(a1*c2-a2*c1)/d;

}
if(x1<100 && x2>400)
{
     setcolor(WHITE);
    line(m3,n3,m1,n1);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(y1<50 && y2>300)
{
     setcolor(WHITE);

    line(m2,n2,m,n);

    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(x1<100 && y2>300)
{


    setcolor(WHITE);
    line(m1,n1,m,n);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(y1<50 && x2>400)
{
     setcolor(WHITE);
    line(m3,n3,m2,n2);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(x1<100 && y2<50)
{
     setcolor(WHITE);
    line(m1,n1,m2,n2);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(y1>300 && x2>400)
{
     setcolor(WHITE);
    line(m,n,m3,n3);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(x1<100)
{
     setcolor(WHITE);
    line(m1,n1,x2,y2);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(x2>400)
{
     setcolor(WHITE);
    line(x1,y1,m3,n3);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}

if(y1<50)
{
     setcolor(WHITE);
    line(m2,n2,x2,y2);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}
if(y2>300)
{
    setcolor(WHITE);
    line(x1,y1,m,n);
    outtextxy(650,90,"press any key to exit");
    getch();
    exit(0);
}


    getch();
   closegraph();

    return 0;
}
