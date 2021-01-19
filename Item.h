#pragma once
/**
 * @file Item.h
 *
 * Item Library
 */


/**
 * @brief       this struct is an item into stack
 *              there is an pointer on previous Item that will be in the stack
 *              and value of this Item that we will adding into stack
*/
typedef struct Item_t
{
    void *previousItem;
    void *value;

}Item;

/**
 * @brief           the function create Item pointer an allocate "makom"
 * @param value     the item value
 * @return          pointer to Item That will created
*/
Item* CreateItem(void *value);

/**
 * @brief           the function delete Item who located at address
 * @param value     address of the item that will be delete
*/
void DeleteItem(Item* value);

/**
 * @brief           the function update the address of previous value of the nextValue
 *                  the Previous address of the nextValue will be the actual value
 * @param actual    address to update into nextValue->previousItem
 * @param nextValue the address of Item That will be change
*/
void UpdatePreviousValueItem(Item *actual, Item *nextValue);

