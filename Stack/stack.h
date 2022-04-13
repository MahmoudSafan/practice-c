#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdbool.h>

#define MaxStack 100

/// if you changed dataEntry type you have should change data type in loop in function traversal Stack
typedef int dataEntry;      

typedef struct Stack{
    int top;
    int dataEntry[MaxStack];
}Stack;

void inetialStack(Stack *);

void stackPush(dataEntry,Stack *);

dataEntry stackPop(Stack *);

/// pointer here for optimization not to change in the stack values
bool isStackEmpty(Stack *);  

/// pointer here for optimization not to change in the stack values
bool isStackFull(Stack *);  

void clearStack(Stack *);

void stackTraversal(Stack *);

dataEntry stackTop(Stack *);

int stackSize(Stack *);


#endif // HEADER_H_INCLUDED
