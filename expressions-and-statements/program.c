#include<stdio.h>

#ifndef __cplusplus
// Refer to https://www.tutorialspoint.com/cprogramming/c_typedef.htm
typedef char bool;
// Refer to https://www.cprogramming.com/tutorial/cpreprocessor.html
#define true 1
#define false 0
#endif

int main()
{
    bool c2f = false;
    double c = 34;
    double f = c * 9 / 5 + 32;

    if (c2f)
    {
        f = c * 9 / 5 + 32;
    }
    else
    {
        c = (f - 32) * 5 / 9;
    }
    
    printf("%f C = %f F\n", c, f);

    return 0;
}

