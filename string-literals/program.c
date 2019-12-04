#include<stdio.h>

int main()
{
	/*char * string = "Hello there!";*/
	char string[] = "Hello there!";

	/* sizeof(string) displays number of bytes (char) including null terminator */
	printf("sizeof(string) %d\n", (int) sizeof(string));

	int length = 0;

	for(char * p = string; *p != 0; ++p)
	{
		++length;
	}

	printf("length %d\n", length);
}
