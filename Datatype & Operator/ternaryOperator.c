#include<stdio.h>
void main()
{
	int age = 45,t;
	if(age>18 && age<60)
		printf("vacc");
	else
		printf("not possible");

	//?:
	t = age>18?age:18-age;
	printf("%d\n",t);
	
	t = age>18?(age<60?age:age-60):60-age;
}
