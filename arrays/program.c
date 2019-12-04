#include<stdio.h>

int * printLargest(int * begin, int * end)
{
	if (begin == end) return 0;

	int * largest = begin;

	for(; begin != end; begin++)
	{
		printf("%d\n", *begin);

		if (*largest < *begin)
		{
			largest = begin;
		}
	}

	return largest;
}

int main()
{
	int numbers[3] = {12, 13, 14};
	int size = sizeof(numbers) / sizeof(numbers[0]);

	for(int i = 0; i < size; i++)
	{
		printf("%d\n", numbers[i]);
	} 

	printf("\n");

	int * p = numbers;
	int * end = p + size;

	for(; p != end; p++)
	{
		printf("%d\n", *p);
	}

	printf("\n");

	int list[] = {2, 1, 4, 2, 15, 2, 4};
	size = sizeof(list) / sizeof(list[0]);
	int * largest = printLargest(list, list + size);

	if (largest)
	{
		printf("largest %d\n", *largest);
	}
}
