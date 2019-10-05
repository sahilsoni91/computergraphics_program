#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int x1,y1,x2,y2,m,dy,dx,x,y,d;
	int a=DETECT,b;
	clrscr();
	initgraph(&a,&b,"");
	printf("Enter Value Of x1=");
	scanf("%d",&x1);
	printf("Enter Value Of y1=");
	scanf("%d",&y1);
	printf("Enter Value Of x2=");
	scanf("%d",&x2);
	printf("Enter Value Of y2=");
	scanf("%d",&y2);
	m=((y2-y1)/(x2-x1));
	if(m<=1)
	{
		dy=y2-y1;
		dx=x2-x1;
		d=(2*(dy))-dx;
		x=x1;
		y=y1;
		putpixel(x,y,2);
		while(x<=x2)
		{
			if(d<0)
			{
				y=y+1;
				d+=(2*(dy-dx));
			}
			else if(d<0)
			{
				d+=2*dy;
			}
			else
			{
				d+=(2*(dy-dx));
			}
			x++;
			putpixel(x,y,2);
		}
	}
	else
	{
		dy=x2-x1;
		dx=y2-y1;
		d=(2*(dy))-dx;
		x=x1;
		y=y1;
		putpixel(x,y,2);
		while(y<=y2)
		{
			if(d>0)
			{
				x=x+1;
				d+=(2*(dy-dx));
			}
			else if(d<0)
			{
				d+=(2*(dy-dx));
			}
			else
			{
				d+=(2*(dy-dx));
			}
			y++;
			putpixel(x,y,2);
		}
	}
	getch();
}