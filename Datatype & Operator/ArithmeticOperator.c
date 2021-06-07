#include<stdio.h>
void main()
{
	// +, -, *, /, % --> return value based on type of operation
	int a = 55 , b = 5, c;
	float e = 45.65, f = 5.55;
	//printf("e mod f--> %f\n",e%f);//decimal mod operation are not accepted
	c = a + b;
	printf("a+b--> %d\n",c);
	
	c = a - b;
	printf("a-b--> %d\n",c);
	
	c = a * b;
	printf("a*b--> %d\n",c);
	
	c = a / b;//quotient
	printf("a/b--> %d\n",c);
	
	c = a % b;//remainder
	printf("a%b--> %d\n",c);
}
