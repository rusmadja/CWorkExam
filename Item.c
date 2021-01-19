#include "Item.h"
#include <stddef.h>
#include <stdlib.h>

Item* CreateItem(void* value)
{
    Item* newItem = malloc(sizeof(Item));
    newItem->value = value;
    newItem->previousValue = NULL;

    return newItem;
}

void DeleteItem(Item* value)
{

}

void UpdatePreviousValueItem(Item *actual, Item *nextValue)
{
    nextValue->previousValue = actual;
}
