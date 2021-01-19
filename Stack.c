#include "Stack.h"

#include <stdlib.h>
#define EMPTY_STACK 0

Stack* CreateStack()
{
    Stack* stack = malloc(sizeof(Stack));
    stack->stackSize = 0;
    stack->lastItem = NULL;

    return stack;
}

void DeleteStack(Stack* stack)
{
    if(stack->stackSize == EMPTY_STACK)
    {
        //don't make anything it's empty
    }
    else //it's not Empty
    {
        stack->stackSize = 0;
        stack->lastItem = NULL;
    }
}

void StackPush(Stack* stack, Item* newItem)
{
    if(stack->stackSize == EMPTY_STACK )
    {
        stack->lastItem = newItem;
    }
    else
    {
        UpdatePreviousValueItem(stack->lastItem,newItem);
        stack->lastItem = newItem;
    }
    stack->stackSize += 1;
}

Item StackPop(Stack *stack)
{
    Item* item = malloc(sizeof(Item));

    if (stack->stackSize == EMPTY_STACK)
    {
        //we can't return anything
        return *item;
    }
    else
    {
        item->previousValue = stack->lastItem->previousValue;
        item->value = stack->lastItem->value;

        stack->lastItem = item->previousValue;
        stack->stackSize -= 1;
        return *item;
    }
}

size_t StackSize(Stack* stack)
{
    return stack->stackSize;
}


int StackGetLastError(Stack* stack)
{
    return (stack->stackSize != 0);
}
