#include<stdio.h>
void main()
{
	// &, |, ^, >>, << --> perform bitwise operation//
	// Step 1--> convert dec to binary -- Step 2 --> perform bitwise operation
	int x = 4, y=8;
	printf("x&y--> %d\n",x&y);
	printf("x|y--> %d\n",x|y);
	printf("x^y--> %d\n",x^y);
	printf("x>>1--> %d\n",x>>1);
	printf("x<<1--> %d\n",x<<1);
}
