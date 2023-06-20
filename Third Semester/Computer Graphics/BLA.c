#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
    int x,y,x1,y1,x2,y2,p,dy,dx;
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BLA" );
    printf("Enter the first coordinate: ");
    scanf("%d",&x1);
    printf("Enter the first coordinate: ");
    scanf("%d",&y1);
    printf("Enter the second coordinate: ");
    scanf("%d",&x2);
    printf("Enter the second coordinate: ");
    scanf("%d",&y2);
    x= x1;
    y=y1;
    dx = x2-x1;
    dy = y2-y1;
    putpixel(x,y,2);
    p = (2*dy-dx);
    while(x<=x2)
    {
        if(p<0)
        {
            x=x+1;
            p=p+2*dy;

        }
        else
        {
            x=x+1;
            y=y+1;
            p = p+(2*dy)-(2*dy);
        }
        putpixel(x,y,7);
    }
    outtextxy(x2+10,y2+10,"Sudip")
    getch();
    closegraph();
    

}
