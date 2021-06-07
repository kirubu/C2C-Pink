#include<stdio.h>
void main()
{
	int a;//4b
	float b;//4b
	char c;//1b
	double d;//8b
	long int l;//8b
	long long int ll;//minimum 8b
	long double db;//16 b
	
	scanf("%d",&a);
	scanf("%f",&b);
	scanf("%lf",&d);
	scanf("%ld",&l);
	scanf("%lld",&ll);
	scanf("%lf",&db);
	scanf("%c",&c);
	
	printf("%d\n",a);
	printf("%f\t",b);
	printf("%lf\n",d);
	
	
}
