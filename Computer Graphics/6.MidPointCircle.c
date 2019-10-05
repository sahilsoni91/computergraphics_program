#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void put(int,int,float,float);
void main()
{
	int a,b;
	float x,y,r,p;
	int m=DETECT,n;
	clrscr();
	initgraph(&m,&n,"");
	printf("Enter x Coordinates Of Center=");
	scanf("%d",&a);
	printf("Enter y Coordinates Of Center=");
	scanf("%d",&b);
	printf("\nEnter Radius=");
	scanf("%f",&r);
	x=0;
	y=r;
	put(a,b,x,y);
	p=(5/4-r);
	while(x<=y)
	{
		if(p<0)
      		{
	   		p=p+((2*x)+3);
      		}
      		else
      		{
	   		p=p+((2*(x-y))+5);
	   		y--;
		}
	   	x++;
	   	put(a,b,x,y);
	}
	getch();
}

//circle creation.........

void put(int a,int b,float x,float y)
{
	putpixel((a+x),(b+y),2);
	putpixel((a-x),(b+y),2);
	putpixel((a+x),(b-y),2);
	putpixel((a-x),(b-y),2);
	putpixel((a+y),(b+x),2);
	putpixel((a-y),(b+x),2);
	putpixel((a+y),(b-x),2);
	putpixel((a-y),(b-x),2);
}
