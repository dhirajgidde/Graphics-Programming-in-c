#include <iostream>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
   int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\TC\\BGI");
    int x,y;
    x=getmaxx()/2;
    y=getmaxy()/2;
    int a[2][4];
    int i=0,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    line(x+a[0][0],y+a[0][1],x+a[0][2],y+a[0][1]);
    line(x+a[0][0],y+a[0][1],x+a[0][0],y+a[0][2]);
    line(x+a[0][0],y+a[0][2],x+a[0][2],y+a[0][2]);
    line(x+a[0][2],y+a[0][2],x+a[0][2],y+a[0][1]);
    line(x+a[1][0],y+a[1][1],x+a[1][2],y+a[1][1]);
    line(x+a[1][0],y+a[1][1],x+a[1][0],y+a[1][2]);
    line(x+a[1][0],y+a[1][2],x+a[1][2],y+a[1][2]);
    line(x+a[1][2],y+a[1][2],x+a[1][2],y+a[1][1]);
    line(x+a[0][0],y+a[0][1],x+a[1][0],y+a[1][1]);
    line(x+a[0][2],y+a[0][1],x+a[1][2],y+a[1][1]);
    line(x+a[0][0],y+a[0][2],x+a[1][0],y+a[1][2]);
    line(x+a[0][2],y+a[0][2],x+a[1][2],y+a[1][2]);
    int k;
    int b[4][4];

    printf("enter the another matrix:\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[2][4];
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
               c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }

    }
    line(x+c[0][0],y+c[0][1],x+c[0][2],y+c[0][1]);
    line(x+c[0][0],y+c[0][1],x+c[0][0],y+c[0][2]);
    line(x+c[0][0],y+c[0][2],x+c[0][2],y+c[0][2]);
    line(x+c[0][2],y+c[0][2],x+c[0][2],y+c[0][1]);
    line(x+c[1][0],y+c[1][1],x+c[1][2],y+c[1][1]);
    line(x+c[1][0],y+c[1][1],x+c[1][0],y+c[1][2]);
    line(x+c[1][0],y+c[1][2],x+c[1][2],y+c[1][2]);
    line(x+c[1][2],y+c[1][2],x+c[1][2],y+c[1][1]);
    line(x+c[0][0],y+c[0][1],x+c[1][0],y+c[1][1]);
    line(x+c[0][2],y+c[0][1],x+c[1][2],y+c[1][1]);
    line(x+c[0][0],y+c[0][2],x+c[1][0],y+c[1][2]);
    line(x+c[0][2],y+c[0][2],x+c[1][2],y+c[1][2]);

    getch();
    closegraph();
}
