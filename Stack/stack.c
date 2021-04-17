#include "stack.h"
#include <stdio.h>
#include <stdlib.h>


void inetialStack(Stack *ps){
    ps->top = 0;
}

void stackPush(dataEntry e,Stack *ps){
    ps-> dataEntry[ps ->top++] = e;
}

dataEntry stackPop(Stack *ps){
    return ps-> dataEntry[--ps->top];
}

dataEntry stackTop(Stack *ps){
    return ps-> dataEntry[ps->top-1];
}

int stackSize(Stack *ps){
    return ps->top;
}

bool isStackEmpty(Stack *ps){
    return ps->top <= 0;
}

bool isStackFull(Stack *ps){
    return ps->top >= MaxStack;
}

void stackTraversal(Stack *ps){
    for(int i = ps->top-1;i >=0; i--)
        printf("%d\n",ps->dataEntry[i]);
}

void clearStack(Stack *ps){
    ps->top = 0;
}

