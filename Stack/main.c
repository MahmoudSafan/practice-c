#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
#include "stack.c"

#define pf(i) printf("%d\n",i)

int main()
{
    Stack s;
    inetialStack(&s);

    stackPush(1,&s);
    stackPush(2,&s);
    stackPush(3,&s);
    stackPush(4,&s);

    if(!isStackEmpty(&s))
        printf("%d Deleted\n",stackPop(&s));

    if(!isStackFull(&s))
        printf("Stack is not Full\n");

    if(!isStackEmpty(&s))
        pf(stackTop(&s));

    pf(stackSize(&s));

    clearStack(&s);

    stackTraversal(&s);

    return 0;
}
