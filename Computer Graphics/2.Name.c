#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int a=DETECT,b;
	initgraph(&a,&b," ");
	line(10,10,40,10);
	line(10,10,10,30);
	line(10,30,40,30);
	line(40,30,40,50);
	line(10,50,40,50);
	line(65,10,50,50);
	line(65,10,80,50);
	line(60,30,70,30);
	line(90,10,90,50);
	line(120,10,120,50);
	line(90,30,120,30);
	line(130,10,160,10);
	line(130,50,160,50);
	line(145,10,145,50);
	line(170,10,170,50);
	line(170,50,200,50);
	getch();
}