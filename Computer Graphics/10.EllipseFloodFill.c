#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void ffill(int,int,int,int);
int main()
{
	int gdriver=DETECT,gmode;
	initgraph(&gdriver,&gmode,"");
	setcolor(3);
	setbkcolor(2);
	fillellipse(100,100,50,70);
	ffill(100,100,1,3);
	getch();
	closegraph();
	return 0;
}

void ffill(int x,int y,int fill,int old)
{
	int current;
 	current=getpixel(x,y);
 	if(current==old)
 	{
  		putpixel(x,y,fill);
  		ffill(x+1,y,fill,old);
  		ffill(x-1,y,fill,old);
  		ffill(x,y-1,fill,old);
  		ffill(x,y+1,fill,old);
  	}
}
