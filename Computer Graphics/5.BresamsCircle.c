#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void put(int,int,float,float);
void main()
{
	int a,b;
	float x,y,r,p;
	int p=DETECT,q;
	clrscr();
	initgraph(&p,&q,"");
	printf("Enter x Coordinates Of Center=");
	scanf("%d",&a);
	printf("Enter y Coordinates Of Center=");
	scanf("%d",&b);
	printf("\nEnter Radius:");
	scanf("%f",&r);
	x=0;
	y=r;
	put(a,b,x,y);
	p=(3-(2*r));
	while(x<=y)
	{
		if(p<0)
		{
			p=p+((4*(x-y))+10);
			y--;
		}
		x++;
		put(a,b,x,y);
	}
	getch();
}

void put(int a,int b, float x,float y)
{
	putpixel((a+x),(b+y),1);
	putpixel((a-x),(b+y),1);
	putpixel((a+x),(b-y),1);
	putpixel((a-x),(b-y),1);
	putpixel((a+y),(b+x),1);
	putpixel((a-y),(b+x),1);
	putpixel((a+y),(b-x),1);
	putpixel((a-y),(b-x),1);
}
