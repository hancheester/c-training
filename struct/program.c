#include<stdio.h>

int main()
{
	typedef struct 
	{
		int x;
		int y;
	} point;

	point p = { 12, 12 };
	printf("x = %d, y = %d", p.x, p.y);
	
	return 0;
}
