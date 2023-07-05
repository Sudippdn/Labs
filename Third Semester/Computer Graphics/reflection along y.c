// program for reflection along y-axis
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
char incFlag;
int polyonPoints[3][2]={{10,100},{110,100},{110,200}};
void PolyLine(){
	int iCnt;
	cleardevice();
	line(0,240,640,240);
	line(320,0,320,480);
	for(iCnt=0;iCnt<3;iCnt++){
		line(PolyonPoints[iCnt][0],PolyonPoints[iCnt][1],PolyonPoints[(iCnt+1)%3][0],PolyonPoints[(iCnt+1)%3][1]);
	}
	
	
}
void Reflect(){
	float angle;
	int iCnt;
	int tx,ty;

	for(iCnt=0;iCnt<3;iCnt++){
	PolyonPoints[iCnt][0]=(640-PolyonPoints[iCnt][0]);
	}
	
}
void main(){
	int gd=DETECT,gm;
	int iCnt;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	
	for(iCnt=0;iCnt<3;iCnt++){
		PolyonPoints[iCnt][0]+=320;
		PolyonPoints[iCnt][1]=240-PolyonPoints[iCnt][1]
		
	}
	PolyLine();
	getch();
	Reflect();
	PolyLine();
	getch();
	
}
