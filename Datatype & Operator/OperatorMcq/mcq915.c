#include<stdio.h>
void main()
{
	int x=17,y=89,p;
	if(++x<50 || y++<100)
	{
		x = x + y;
		y = y + x;
	}
	printf("%d",x+y);
}
