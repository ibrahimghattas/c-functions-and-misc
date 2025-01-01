#include <stdio.h>
#include <stdlib.h>

int main()

{
    int result=0,temp,i;
    unsigned int    num ;
    while (1)

    {
        result=0;
        printf("enter number\n");
        scanf("%d",&num);

        temp=num;



        while(temp)
        {
            result=result+(temp&1);

            temp=temp>>1;

        }

        printf("total 1s in %d is %d\n",num,result);


    }
    return 0;
}
