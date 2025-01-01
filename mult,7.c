#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num,result;
    while (1)

    {
        printf("enter a num,ber\n");
        scanf("%d",&num);

        result=(num<<3)-num;

        printf("the result is %d\n",result);

    }
    return 0;
}
