#pragma once

#include <stdint.h>

typedef enum {
    OK, /** <Operation successful.*/
    EMPTY,  /** <The list is empty.*/
    FULL,   /** <The list is full..*/
    NOT_FOUND,  /** <List item not found.*/
    FOUND   /** <Item found.*/
} LinkedListReturnCode;

typedef struct ListNode_t
{
    void* item;
    struct ListNode_t* next;
};

typedef struct ListNode_t* head;
typedef struct ListNode_t* current;

head LinkedList_create(void);
LinkedListReturnCode LinkedList_destroy(LinkedList list);
LinkedListReturnCode LinkedList_push(LinkedList list,void* item);
void* LinkedList_pull(LinkedList list);
LinkedListReturnCode LinkedList_constainsItem(LinkedList list,void* item);
LinkedListReturnCode LinkedList_removeItem(LinkedList list,void* item);
void* LinkedList_peekItemByIndex(LinkedList list,uint16_t index);
uint16_t LinkedList_lengt(LinkedList list);
void LinkedList_clear(LinkedList list);
ListNode LinkedList_getIterator(LinkedList list);
void* LinkedList_itteratorNext(LinkedList list,ListNode* iterator);
