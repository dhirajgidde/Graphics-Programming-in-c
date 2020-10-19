#include <graphics.h>
#include <dos.h>
#include <conio.h>

main()
{
   int i, j = 0, gd = DETECT, gm;

   initgraph(&gd,&gm,"C:\\TC\\BGI");
       int g=5;
   for(i=0;i<=800;i=i+10)
   {
        circle(100+g,100,20);
        line(100+g,120,100,200);
        line(100,125,50+g,150);
        line(100+g,125,150,150);
        line(100,175,50+g,200);
        line(100+g,175,150,200);
        delay(70);
        g=g+5;
        clearviewport();

   }
   getch();
     closegraph();
   return 0;
}
