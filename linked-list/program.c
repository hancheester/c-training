#include<stdio.h>
#include<stdlib.h> //we will use malloc and free from stdlib library

#ifndef ___cplusplus
typedef char bool;
#define true 1
#define false 0
#endif

struct node
{
	struct node * next;
};
typedef struct node node;

typedef struct
{
	node * first;
	node * last;
} list;

void init(list * container)
{
	container->first = 0;
	container->last = 0;
}

bool isEmpty(list * container)
{
	return container->first == 0;
}

node * begin(list * container)
{
	return container->first;
}

node * next(node * node)
{
	return node->next;
}

void pushBack(list * container, node * node)
{
	if (isEmpty(container))
	{
		container->first = node;
		container->last = node;
	}
	else
	{
		container->last->next = node;
		container->last = node;
	}
	
	node->next = 0;
}

node * popFront(list * container)
{
	node * node = container->first;
	container->first = container->first->next;
	return node;
}

typedef struct
{
	node header;
	int value;
} apple;

int main()
{
	list apples;

	// Refer to https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/
	apple * a = (apple *) malloc(sizeof(apple));
	apple * b = (apple *) malloc(sizeof(apple));
	apple * c = (apple *) malloc(sizeof(apple));
	
	a->value = 12;
	b->value = 13;
	c->value = 14;

	init(&apples);

	// Note that &a->header doesn't mean we evaluate &a first then access member header
	// Based on C Operator Precedence, -> has higher precedence than &
	// So we get member header first then get address of the header.
	// Refer to https://en.cppreference.com/w/c/language/operator_precedence
	pushBack(&apples, &a->header); 
	pushBack(&apples, &b->header);
	pushBack(&apples, &c->header);

	for(a = (apple *) begin(&apples); a; a = (apple *) next(&a->header))
	{
		printf("%d\n", a->value);
	}

	while(!isEmpty(&apples))
	{
		a = (apple *) popFront(&apples);
		free(a);
	}

	return 0;
}
