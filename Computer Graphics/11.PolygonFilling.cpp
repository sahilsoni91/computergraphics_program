#include<iostream.h>
#include<conio.h>
#include<graphics.h>

class poly
{
	private:
  		int i,j,k,n;
  		int x[10],y[10];
 	public:
  		void userinp();
  		void graph();
  		void plot();
  		void scanline();
  		void fill();
  		int ser();
};

void poly::userinp()
{
	clrscr();
 	cout<<"\n Enter number of vertices:";
 	cin>>n;
  	for(i+0;i<n;i++)
  	{
   		cout<<"\n Enter the "<<i+1<<" Coordinate=";
   		cin>>x[i]>>y[i];
  	}
}

void poly::graph()
{
	int gd=DETECT,gm;
 	initgraph(&gd,&gm,"");
}

void poly::plot()
{
	setcolor(WHITE);
 	for(i=0;i+1<n;i++)
  	{
   		line(x[i],y[i],x[0],y[0]);
  	}
   	line(x[i],y[i],x[0],y[0]);
}

void poly::scanline()
{
	int clr;
 	for(i=0;i<getmaxy();i++)
 	{
  		for(j=0;j<getmaxx();j++)
  		{
   			clr=getpixel(j,i);
   			if(clr==15)
   			fill();
  		}
 	}
}

void poly::fill()
{
	int c1;
 	c1=getpixel(j+1,i);
 	while(c1!=15&&(ser())%2!=0)
 	{
  		putpixel(j,i,WHITE);
  		if(c1!=15)
  		j++;
  		c1=getpixel(j,i);
 	}
}

int poly::ser()
{
	int r,s,k=0;
 	for(r=j+1;r<getmaxx();r++)
 	{
  		s=getpixel(r,i);
  		if(s==15)
  		k++;
 	}
 	return(k);
}

void main()
{
	poly p1;
 	p1.userinp();
 	p1.graph();
 	p1.plot();
 	p1.scanline();
 	getch();
 	closegraph();
}