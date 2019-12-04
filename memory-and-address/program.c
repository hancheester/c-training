#include<stdio.h>

int main()
{
	int a = 10;
	int* ptr = &a;

	/*
	%p is a format specifier which is used 
	if we want to print data of type (void *) 
	i.e, in simple words address of pointer or any other variable.
	The output is displayed in hexadecimal value.
	*/
	printf("0x%p\n", ptr);
	printf("%d\n", ptr);

	/*
	Output:
		0x000000000061FE14
		6422036
	*/
}