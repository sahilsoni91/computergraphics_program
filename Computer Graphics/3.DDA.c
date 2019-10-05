#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int a=DETECT,b;
	int x,y,x1,x2,y1,y2,dy,dx,step,m,xi,yi,k;
	initgraph(&a,&b," ");
	clrscr();
	printf("Enter Value Of x1=");
	scanf("%d",&x1);
	printf("Enter Value Of y1=");
	scanf("%d",&y1);
	printf("Enter Value Of x2=");
	scanf("%d",&x2);
	printf("Enter Value Of y2=");
	scanf("%d",&y2);
	dx=x2-x1;
	dy=y2-y1;
	m=dy/dx;
	if(m>=1)
	{
		step=dy;
	}
	else
	{
		step=dx;
	}
	xi=dx/step;
	yi=dy/step;
	x=x1;
	y=y1;
	putpixel(x,y,RED);
	for(k=1;k<=step;k++)
	{
		x=x+xi;
		y=y+yi;
		putpixel(x,y,RED);
	}
	getch();
}