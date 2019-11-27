#include<stdio.h>

struct Pixel
{
    float X;
    float Y;
};

typedef struct Pixel Pixel;

// Or, we can declare below
// typedef struct 
// {
//     float X;
//     float Y;
// } Pixel;


typedef unsigned char byte;

struct Color
{
    byte Red;
    byte Green;
    byte Blue;
};

int main()
{
    // struct Pixel p;
    // To remove struct from above, simply put "typedef struct Pixel Pixel"
    Pixel p;
    struct Color c;
}
