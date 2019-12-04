#include<stdio.h>

int main()
{
	int numbers[3] = {12, 13, 14};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	for(int i = 0; i < size; i++)
	{
		printf("%d\n", numbers[i]);
	} 
}
