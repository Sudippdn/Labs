// Program for Y-Shear
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
void main(){
	
	int gd=DETECT, gm;
	float shx,shy;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	printf("Enter shear factor shy along y-axis: ");
	scanf("%f",&shy);
	line(100,10,200,10);
	line(200,10,200,200);
	line(200,200,100,200);
	line(100,200,100,10);
	printf("Y-shear");
	setcolor(12);
	line(100,10+(shy*100),200,10+(shy*200));
	line(200,10+(shy*200),200,200+(shy*200));
	line(200,200+(shy*200),100,200+(shy*100));
	line(100,200+(shy*100),100,10+(shy*100));
	
	getch();
	closegraph();
	
}
