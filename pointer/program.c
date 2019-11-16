#include<stdio.h>

int main()
{
	char * name = "John";

	printf("%s\n", name);

	int values[5] = {1, 2, 3, 4, 5};

	int * ptr = values;

	printf("%d", *ptr);

	return 0;
}
