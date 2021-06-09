#include<stdio.h>
void main()
{
	int a = 10, b = 5,c;
	// ++, --
	//c = a++ + ++a;
	//printf("%d",c);

	//c = ++a + a++;
	//printf("%d",c);

	c = ++a + ++a;
	printf("%d",c);
}
