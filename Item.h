#pragma once
/**
 * @file Item.h
 *
 * Item Library
 */


/**
 * @brief
*/
typedef struct Item_t
{
    void *previousValue;
    void *value;

}Item;

/**
 * @brief 
 * @param value 
 * @return 
*/
Item* CreateItem(void *value);

/**
 * @brief 
 * @param value 
*/
void DeleteItem(Item* value);

/**
 * @brief 
 * @param actual 
 * @param nextValue 
*/
void UpdatePreviousValueItem(Item *actual, Item *nextValue);

