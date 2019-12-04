#include<stdio.h>

int stringLength(char * string)
{
	int length = 0;

	/*
	1. if (*string is not 0)
	2. increment length
	3. increment *string by *string++
	4. repeat from step 1
	*/
	while(*string++)
	{
		++length;
	}

	return length;
}

int main()
{
	/*char * string = "Hello there!";*/
	char string[] = "Hello there!";

	/* sizeof(string) displays number of bytes (char) including null terminator */
	printf("sizeof(string) %d\n", (int) sizeof(string));

	int length = 0;

	/* 0 value represents null terminator */
	for(char * p = string; *p != 0; ++p)
	{
		++length;
	}

	printf("length %d\n", length);

	printf("%d\n", stringLength("Hello"));
	printf("%d\n", stringLength("!"));
}
