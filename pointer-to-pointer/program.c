#include<stdio.h>

void findMinMax(int * begin, int * end, int ** smallest, int ** largest)
{
    if (begin == end)
    {
        *smallest = 0;
        *largest = 0;
    }
    else
    {
        *smallest = *largest = begin;

        // Notice we use pre-increment operator ++ to skip the first value
        while(++begin != end)
        {
            // Use dereferencing, compare underlying values
            if (*begin < **smallest)
            {
                *smallest = begin;
            }

            if (*begin > **largest)
            {
                *largest = begin;
            }
        }
    }
    
}

int main()
{
    int value = 1234;
    int * p = &value;
    int ** pp = &p;
    printf("%d\n", **pp);
    // To find the underlying value, just use **pp

    int values[] = {5, 3, 2, 7, 1, 4};
    int size = sizeof(values) / sizeof(values[0]);

    int * smallest = 0;
    int * largest = 0;

    // Useful for output parameters
    findMinMax(values, values + size, &smallest, &largest);

    printf("min %d max %d\n", *smallest, *largest);
    
}