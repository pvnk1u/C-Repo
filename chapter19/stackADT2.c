// stackADT.h和stackADT.c中，栈里的项都是整数，太有局限性了，
// 为了使栈抽象数据类型更易于针对不同的数据项进行修改，
// stackADT2.h和stackADT2.c用类型名Item表示存储到栈中的数据的类型

#include <stdio.h>
#include <stdlib.h>
#include "stackADT2.h"

#define STACK_SIZE 100

struct stack_type{
	Item contents[STACK_SIZE];
	int top;
};

static void terminate(const char *message){
	printf("%s\n",message);
	exit(EXIT_FAILURE);
}

Stack create(void){
	Stack s = malloc(sizeof(struct stack_type));
	if(s == NULL)
		teminate("Error in create: stack could not be created.");
	s->top = 0;
	return s;
}


void destroy(Stack s){
	free(s);
}

void make_empty(Stack s){
	s->top = 0;
}

bool is_empty(Stack s){
	return s->top == 0;
}

bool is_full(Stack s){
	return s->top == STACK_SIZE;
}

void push(Stack s,Item i){
	if(is_full(s))
		terminate("Error in push: stack is full.");
	s->contents[s->top++] = i;
}

Item pop(Stack s){
	if(is_empty(s))	
		terminate("Error in pop: stack is empty.");
	return s->contents[--s->top];
}