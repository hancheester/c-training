#include<stdio.h>

typedef struct 
{
	//short first; // xx__ -> 2 bytes
	//int second;  // xxxx -> 4 bytes
	//short third; // xx__ -> 2 bytes
	// However, due to structure padding, xx__ is 4 bytes (xx 2 bytes + __ 2 bytes) where _ is empty / padding
	// Thus, sizeof(Layout) will be 4 + 4 + 4 = 12 bytes

	short first; // xx -> 2 bytes
	short third; // xx -> 2 bytes
	int second;  // xxxx -> 4 bytes
	// sizeof(Layout) will be 2 + 2 + 4 = 8 bytes
} Layout;

int main()
{
	printf("short %d\n", (int) sizeof(short));
	printf("int %d\n", (int) sizeof(int));
	printf("struct Layout %d\n", (int) sizeof(Layout));	
}
