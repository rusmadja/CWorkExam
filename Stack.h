#pragma once
#include <stddef.h>
#include "Item.h"
/**
 * @file Stack.h
 *
 * Stack Library
 */


/**
 * @brief   
*/
typedef struct Stack_t
{
    Item *lastItem;
    size_t stackSize;

}Stack, *pStack;



/**
 * @brief           The function create an empty container. 
 * @return          the empty stack that was created
*/
Stack *CreateStack();

/**
 * @brief           The function delete everything in the container
 * @param stack     the stack to delete
 *
 * Assumption:      this function delete what is
 *                  in the container and leave it
 *                  empty but do not delete the container 
*/
void DeleteStack(Stack *stack);

/**
 * @brief           The function add member into stack container.
 * @param stack     the stack where we will add the item
 * @param newItem      the item will be adding to the stack
*/
void StackPush(Stack *stack, Item *newItem);

/**
 * @brief           The function extract the last member.
 * @param stack     the container
 * @return          the last Item that was added
*/
Item StackPop(Stack *stack);

/**
 * @brief           The function give the size of stack.
 * @param stack     the container
 * @return          size_t of numbers items in the stack
*/
size_t StackSize(Stack *stack);

/**
 * @brief           The function print the entire stack
 * @param stack     the container who will print
*/
void StackPrint(Stack *stack);

/**
 * @brief 
 * @param stack 
 * @return 
 */
int StackGetLastError(Stack *stack);