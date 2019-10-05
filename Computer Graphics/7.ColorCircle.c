#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void put(int,int,float,float);
void cfill(int,int,int,int);
void main()
{
	int a,b,s;
	float x,y,r,p;
	int m=DETECT,n;
	clrscr();
	initgraph(&m,&n,"");
	printf("Enter x Coordinates Of Center=");
	scanf("%d",&a);
	printf("Enter y Coordinates Of Center=");
	scanf("%d",&b);
	printf("\nEnter Radius:");
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
	printf("Press 1 To Color The Circle");
	scanf("%d",&s);
	if(s==1)
	{
		if(r<30)
		{
			cfill(a,b,7,2);
     		}
     		else
    		{
    			printf("Radius Must Be Less Than 30");
    		}
	}
	getch();
}

//Circle creation......

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

//Colouring the circle......

void cfill(int a,int b,int fcolor,int bcolor)
{
	int p,q,c;
	p=a;
	q=b;
	c=getpixel(p,q);
	if(c!=bcolor && c!=fcolor)
	{
		putpixel(p,q,7);
		cfill(a+1,b,7,2);
		cfill(a,b+1,7,2);
		cfill(a-1,b,7,2);
		cfill(a,b-1,7,2);
	 }
}