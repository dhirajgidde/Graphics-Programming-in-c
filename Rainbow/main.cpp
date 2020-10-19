//#include <iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
//using namespace std;

int main()
{
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"");

  //rectangle(100,300,300,400);

  int i;

  //arc(100,100,10,200,50);

  //arc(200,100,340,170,50);
  //line(53.5,119,150,210);
  //line(245,119,150,210);
  int a;

   outtextxy(100,280," loading........");
     setcolor(WHITE);
   //

 /* */



 int x,y;

 //a=getch();
 for(i=0;i<400;i=i+1)
  {
    rectangle(100+i,300,500,320);
    //x=rand()%getmaxx();
   // y=rand()%getmaxy();
   // putpixel(x,y,15);
    delay(20);
  }

  cleardevice();
   for (i=30; i<200; i++)
    {

        delay(100);


        setcolor(i/10);


        arc(200, 500, 0, 180, i-10);
    }

  getch();
  closegraph();
}
