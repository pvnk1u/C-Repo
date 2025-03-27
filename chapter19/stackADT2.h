// stackADT.h和stackADT.c中，栈里的项都是整数，太有局限性了，
// 为了使栈抽象数据类型更易于针对不同的数据项进行修改，
// stackADT2.h和stackADT2.c用类型名Item表示存储到栈中的数据的类型

#ifndef STACKADT_H
#define STACKADT_H

#include <stdbool.h>  /* C99 ONLY */

// 改变栈里的数的类型
typedef int Item;

typedef struct stack_type *Stack;

Stack create(void);
void destroy(Stack s);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s,Item i);
Item pop(Stack s);

#endif