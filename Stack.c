

#include "Stack.h"

Stack *CreateStack(void) {
	Stack *newStack = malloc(sizeof(Stack));
	newStack->head = NULL;
	newStack->size = 0;

	return newStack;
}

void StackPush(Stack s, Item item) {
	Item *newNode = malloc(sizeof(struct node));
	newNode->item = item; 
	newNode->next = s->head; 

	s->head = newNode; 
	s->size++;
}


void StackPop(Stack s) {
	struct node *newHead = s->head->next; 

	free(s->head);
	s->head = newHead;
}

Item StackTop(Stack s) {
	if (s->size == 0) {
		printf("The Stack is empty!\n");
		return;
	}

	return s->head->item;
}
