#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int i;
      	int gd=DETECT,gm=DETECT;
      	initgraph(&gd,&gm,"");
      	setcolor(WHITE);
      	line(50,50,180,50);
      	for(i=50;i<=180;i+=10)
	{
		setcolor(RED);
	    	outtextxy(i,50,"g");
	    	delay(400);
	    	setcolor(BLACK);
	    	setcolor(RED);
	    	outtextxy(i,50,"G");
	}

	//setcolor(BLACK);
	getch();
}