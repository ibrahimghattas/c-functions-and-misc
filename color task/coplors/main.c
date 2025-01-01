#include <stdio.h>
#include <stdlib.h>
#include "list.h"


#include "colors.h"
#define TABLESIZE 100
#define DATASIZE 78

typedef enum {
Hash_FOUND,
HASH_NOT_FOUND

}HASH_STATUS;








CanData_t CanDataArr[DATASIZE];
CanData_t newCanDataArr[DATASIZE];
CanData_t testdataArr[DATASIZE];
int hashtable[TABLESIZE];

unsigned int hash(CanData_t*pCanData)
{
    unsigned long long value = 1;
    unsigned int i = 0;
    unsigned int key_len=3;




    for (; i < key_len; ++i) {
        value = value * 37 + pCanData->colors[i];
    }

    //printf("before %u\n",value);


    value = value % TABLESIZE;

    //printf("after %u\n",value);


    return value;
}

/*
node_t* createHaTable()
{
    node_t  *table [TABLESIZE]={0};

    for (int i =0; i<DATASIZE;i++)
        {
            printf("%d   %d\n",i,hash(CanDataArr+i));
            if (table[hash(&CanDataArr[i])]==NULLPTR)
            {
                table[i]=CreateNode(CanDataArr[i]);
            }
            else
            {
                list_addNoteToFirst(table[i],CanDataArr[i]);
            }

        }
        return table;

}
*/
void getCanData(int LedIndex,CanData_t*pCanData)
{
    static int  x=0;

    pCanData->colors[0]=u8customerColor[x][0];
    pCanData->colors[1]=u8customerColor[x][1];
    pCanData->colors[2]=u8customerColor[x][2];
    x++;
    pCanData->intensity=20;

}
void getnewCanData(int LedIndex,CanData_t*pCanData)
{
    static int  x=0;

    pCanData->colors[0]=u8OutColor[x][0];
    pCanData->colors[1]=u8OutColor[x][1];
    pCanData->colors[2]=u8OutColor[x][2];
    x++;
    pCanData->intensity=20;

}
void gettestCanData(int LedIndex,CanData_t*pCanData)
{

    unsigned int r,g,b;

    printf("enter red\n");
    scanf("%d",&r);
    printf("enter green\n");
    scanf("%d",&g);
    printf("enter blue\n");
    scanf("%d",&b);

    pCanData->colors[0]=r;
    pCanData->colors[1]=g;
    pCanData->colors[2]=b;

    pCanData->intensity=20;

}

void SetPWM(int LedIndex,unsigned char red,unsigned char green,unsigned char blue)
{
    printf("for led :%3d red= %3d   green=%3d    blue=%3d\n",LedIndex,red,green,blue);
}

CanData_t hashcheck(node_t**table,CanData_t data)
{
    unsigned int slot = hash(&data);
    printf("shlot = %d \n",slot);
    node_t* current =table[slot];


    /* if ()
     {
            printf("no entry\n");
            return data;
     }
     else*/
     {
         //current=current->next;
         while (current!=NULLPTR)
         {

             if (  (current->data.colors[0] == data.colors[0]) &&
                    (current->data.colors[1] == data.colors[1])&&
                    (current->data.colors[2] == data.colors[2]))
             {
                    printf("found in the list\n");
                    return current->newdata;
             }
                else
                {
                    printf("looking at the next entry \n");
                    current=current->next;
                }
         }
         return data;
     }

}

int main()
{
    int i;
    //printf("1");

    //printf("1");

    for(i=0; i<DATASIZE; i++)
    {
        getCanData(i,&CanDataArr[i]) ;
    }
    for(i=0; i<DATASIZE; i++)
    {
        getnewCanData(i,&newCanDataArr[i]) ;
    }


   // printf("after getting data\n");
    /*for(i=0; i<85; i++)
    {
        SetPWM(i,CanDataArr[i].colors[0],CanDataArr[i].colors[1],CanDataArr[i].colors[2]);
    }*/

    //printf("1");
    node_t* table[TABLESIZE]={0};



    for (int i=0;i<DATASIZE;i++)
    {
        if (table[hash(&CanDataArr[i])]==0)
        {
           // printf("creating a list\n");
            table[hash(&CanDataArr[i])]=CreateNode(CanDataArr[i],newCanDataArr[i]);
        }
        else
        {
            //printf("stacking a list\n");
            list_addNoteToLast(&table[hash(&CanDataArr[i])],CanDataArr[i], newCanDataArr[i]);
        }

    }
   /* for (int i=0 ;i<TABLESIZE;i++)
    {
        printf("list at cell %d\n",i);
        list_print((node_t*)table[i]);
    }*/


    for(i=0; i<DATASIZE; i++)
    {
        gettestCanData(i,&testdataArr[i]) ;
        printf("before\n");
        SetPWM(i,testdataArr[i].colors[0],testdataArr[i].colors[1],testdataArr[i].colors[2]);
        testdataArr[i]=hashcheck(&table,testdataArr[i]);
        printf("after \n");
        SetPWM(i,testdataArr[i].colors[0],testdataArr[i].colors[1],testdataArr[i].colors[2]);
    }
   /* for(i=0; i<DATASIZE; i++)
    {
        SetPWM(i,testdataArr[i].colors[0],testdataArr[i].colors[1],testdataArr[i].colors[2]);
    }

    for(i=0; i<DATASIZE; i++)
    {
        testdataArr[i]=hashcheck(table,testdataArr[i]);
    }
    printf("=========================================\nafter\n");
    for(i=0; i<DATASIZE; i++)
    {
       // SetPWM(i,testdataArr[i].colors[0],testdataArr[i].colors[1],testdataArr[i].colors[2]);
    }*/



    return 0;
}
