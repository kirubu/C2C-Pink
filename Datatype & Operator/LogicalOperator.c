#include<stdio.h>
void main()
{
	// &&, ||, ! --> combining condition --> return value 0 or 1
	int age = 45, result;
	
	result = age>18 && age<=60;
	printf("%d",result);//1
	
	age = 10;
	result = age>18 || age<=60;
	printf("%d",result);//1
	
	age = 70;
	result = age>18 || age<=60;
	printf("%d",result);//1
	
	age = 70;
	result = age<=60 || age>18;//age<=60 && age>18;
	printf("%d\n",result);//1
	
	result = !age;
	printf("!age = %d\n",result);
	result = !0;
	printf("!0 = %d\n",result);
}
