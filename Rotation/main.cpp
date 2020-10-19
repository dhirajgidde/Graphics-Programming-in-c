#include <iostream>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
using namespace std;

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"c:\\TC\\BGI");
    int a1,b1;
    a1=getmaxx()/2;
    b1=getmaxy()/2;
    int x1,y1,x2,y2,x3,y3;
    int a[3][2];
    int i,j;
    line(a1,0,a1,550);
    line(0,b1,getmaxx(),b1);
    printf("enter the points x1,y1,x2,y2,x3,y3 respectivaly:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    line(a1+a[0][0],b1+a[0][1],a1+a[1][0],b1+a[1][1]);
    line(a1+a[0][0],b1+a[0][1],a1+a[2][0],b1+a[2][1]);
    line(a1+a[1][0],b1+a[1][1],a1+a[2][0],b1+a[2][1]);

    int k;
    int b[2][2];


    printf("enter the another matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[3][2];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            c[i][j]=0;
            for(k=0;k<2;k++)
            {
               c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }

    }
    printf("the angle is rotate: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d",c[i][j]);
        }
        printf("\n");
    }
    line(a1+c[0][0],b1+c[0][1],a1+c[1][0],b1+c[1][1]);
    line(a1+c[0][0],b1+c[0][1],a1+c[2][0],b1+c[2][1]);
    line(a1+c[1][0],b1+c[1][1],a1+c[2][0],b1+c[2][1]);
   // initgraph(&gd,&gm,"c:\\TC\\BGI");


    //circle(100,200,30);
    getch();
    closegraph();
    //cout << "Hello world!" << endl;
    return 0;
}
