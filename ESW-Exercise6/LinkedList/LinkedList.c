#include "LinkedList.h"

#include <complex.h>
#include <stdlib.h>

LinkedList LinkedList_create(void)
{
    LinkedList list = malloc(sizeof(LinkedList));
    return list;
}
LinkedListReturnCode LinkedList_destroy(LinkedList list)
{
    if(list==NULL) return EMPTY;
    else
    {
        free(list);
        return OK;
    }
}
LinkedListReturnCode LinkedList_push(LinkedList list,void* item)
{
    ListNode newnode = malloc(sizeof(ListNode));
    newnode->item=item;
    newnode->next=list;
    return OK;
}
void* LinkedList_pull(LinkedList list)
{
    if(list==NULL)return NULL;
    else
    {
        return list
    }
}
LinkedListReturnCode LinkedList_constainsItem(LinkedList list,void* item)
{
    
}
LinkedListReturnCode LinkedList_removeItem(LinkedList list,void* item)
{
    
}
void* LinkedList_peekItemByIndex(LinkedList list,uint16_t index)
{
    
}
uint16_t LinkedList_lengt(LinkedList list)
{
    
}
void LinkedList_clear(LinkedList list)
{
    
}
ListNode LinkedList_getIterator(LinkedList list)
{
    
}
void* LinkedList_itteratorNext(LinkedList list,ListNode* iterator)
{
    
}