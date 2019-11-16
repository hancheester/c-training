#include<stdio.h>

void someFunction(int arg)
{
	printf("This is someFunction being called and arg is: %d\n", arg);
}

int main()
{
	void (* pf)(int target);
	pf = someFunction;
	pf(5);

	typedef void (* functionType)(int target);
	functionType aFunctionType = someFunction;
	aFunctionType(88);
	
	return 0;
}
