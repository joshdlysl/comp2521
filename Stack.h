#include <stdbool.h>

#ifndef 
#define 

struct stack {
	struct node *head;
	int size;
}

struct node {
	Item item; 
	struct node *next;
}

typedef int Item; 
typedef struct stack *Stack;

// Creates and returns a Stack
Stack *CreateStack(void);

// Adding Item into a stack
void StackPush(Stack s, Item item);

// Removes the next Item off the stack 
void StackPop(Stack s);

// Get the value of the top node
Item StackTop(Stack s);

#endif
