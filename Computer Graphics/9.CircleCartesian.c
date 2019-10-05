#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void acircle(int h,int k,int r);
void dpixel(int x,int y,int h,int k);
void main()
{
      int m=DETECT,n;
      initgraph(&m,&n,"");
      acircle(100,100,87);
      getch();
      closegraph();
}

void acircle(int h,int k,int r)
{
      int y,x;
      int theta;
      for(theta=0;theta<=360;theta+=1)
      {
	   x=r*cos(theta);
	   y=r*sin(theta);
	   dpixel(x,y,h,k);

      }
}

void dpixel(int x,int y,int h,int k)
{

	    putpixel(x+h,y+k,RED);
	    putpixel(y+h,x+k,RED);
	    putpixel(-y+h,x+k,RED);
	    putpixel(-x+h,y+k,RED);
	    putpixel(-x+h,-y+k,RED);
	    putpixel(-y+h,-x+k,RED);
	    putpixel(y+h,-x+k,RED);
	    putpixel(x+h,-y+k,RED);
}
