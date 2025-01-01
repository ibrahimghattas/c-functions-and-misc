#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num=0xFFFFFFFF,result,bit;
    while (1)

    {
        printf("enter bit num to clear from FF\n");
        scanf("%d",&bit);

        result=num &~(1<<bit);

        printf("the result in hex is %x\n",result);

    }
    return 0;
}
