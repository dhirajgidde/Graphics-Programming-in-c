#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\TC\\BGI");


    arc(200,420,0,180,90);
    line(90,420,310,420);
    line(200,420,200,310);
    line(200,310,190,320);
    line(200,310,210,320);
    line(200,400,190,420);
    line(200,400,210,420);
    line(200,390,190,410);
    line(200,390,210,410);
    outtextxy(50,50,"press any key");
    getch();
    int i;
    int k=0;
    for(i=0;i<=200;i=i+10)
    {
            setcolor(k);
            circle(200,100,30);
            //circle(400,120,30);
            //circle(300,150,30);
            //circle(100,200,30);
            //circle(500,180,30);
            floodfill(200,100,k);
            k++;
            setfillstyle(SOLID_FILL,RED);
            line(200,420-i,200,310-i);
            line(200,310-i,190,320-i);
            line(200,310-i,210,320-i);
            line(200,400-i,190,420-i);
            line(200,400-i,210,420-i);
            line(200,390-i,190,410-i);
            line(200,390-i,210,410-i);

        delay(100);
        if(k==10)
            k=0;
       cleardevice();

    }
    int j=0;

    for(i=0;i<800;i=i+10)
    {
        delay(100);
        setcolor(j);
        j++;
        settextstyle(GOTHIC_FONT,HORIZ_DIR,4);
        outtextxy(150,200,"Best of luck for exam");
        arc(150,200,0+i,180+i,90);
        /*rectangle(100+i,50,250+i,300);
        rectangle(250+i,200,400+i,300);
        circle(350+i,300,40);
        circle(150+i,300,40);*/
        arc(200,500,0,180,90+i);
        //cleardevice();
        if(j==10)
            j=0;
    }

    //circle(150,300,40);
    getch();
    closegraph();
    return 0;
}
