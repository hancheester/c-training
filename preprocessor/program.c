// start of program.c

#include "multiply.h"

int main()
{
	multiply(4, 5); /* and then */ multiply(6, 7);

	SQUARE(19);

	#if !defined(RUNFAST)
	multiply(100, 100);
	#endif
}

// end of program.c