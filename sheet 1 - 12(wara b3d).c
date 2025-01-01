#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,sum =0;

    while (1)
    {

    printf("enter an even number to add \n");
    scanf("%d",&num);

    if (num%2==0)
    {
        sum=sum+num;
        printf("Sum = %d\n",sum);
    }
    else
    {
        printf("enter an even number to add \n");
        scanf("%d",&num);

        if (num%2==0)
        {
            sum=sum+num;
            printf("Sum =%d\n",sum);
            continue ;
        }
        else
        {
            return 10;
        }
    }



    }

    return 0;
}
