
#define NULLPTR   ((void*)0)

typedef struct
{

    unsigned char colors[3];
    char intensity;

} CanData_t;

typedef struct node{
CanData_t data;
CanData_t newdata;

struct node* next;
}node_t;

typedef enum{
LIST_EMPTY,
NOT_FOUND,
LIST_DONE
}listStatus_t;



void list_print(node_t*head);
void list_addNoteToLast(node_t**phead,CanData_t data,CanData_t newdata);
void list_addNoteToFirst(node_t**phead,CanData_t data,CanData_t newdata);
listStatus_t  list_editNode(node_t*head,CanData_t oldData,CanData_t data);
listStatus_t list_RemoveData(node_t**phead,CanData_t oldData);
listStatus_t list_insertAfter(node_t*head,CanData_t prevData,CanData_t data);

