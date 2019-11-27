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

// unsigned char -> 0 - 255
// signed char -> -128 - 127
// sizeof(char) = 1 byte
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
