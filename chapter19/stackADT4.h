/* 
stackADT4.h和stackADT4.c使用链表实现栈抽象数据类型
 */


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