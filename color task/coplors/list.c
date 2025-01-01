#include "list.h"



node_t*CreateNode(CanData_t data,CanData_t newdata)
{
    node_t*newNode;
   newNode=malloc(sizeof(node_t));
   newNode->data=data;
   newNode->newdata=newdata;
   newNode->next=NULLPTR;
   return newNode;
}


void list_addNoteToLast(node_t**phead,CanData_t data,CanData_t newdata)
{
    node_t*newNode=CreateNode(data,newdata);
    node_t*current=*phead;
    if(*phead==NULLPTR)
    {
     newNode->next=*phead;
    *phead=newNode;
        return;
    }
    while(current->next!=NULLPTR)
    {
        current=current->next;
    }
    current->next=newNode;

}
void list_addNoteToFirst(node_t**phead,CanData_t data,CanData_t newdata)
{
    node_t*newNode=CreateNode(data,newdata);
    newNode->next=*phead;
    *phead=newNode;

}

void list_print(node_t*head)
{
    node_t*current=head;

    while(current!=NULLPTR)
    {
        printf("        %3d   %3d    %3d\n newdata %3d    %3d     %3d\n",current->data.colors[0],current->data.colors[1],current->data.colors[2],current->newdata.colors[0],current->newdata.colors[1],current->newdata.colors[2]);

        current=current->next;
    }
    printf("\n");

}

