#include <stdio.h>
#include <stdlib.h>

int main()
{


    signed int  num , min , max;
    int i, count;

    printf("enter number of numbers\n");
    scanf("%d",&count);
    if (count<=0)
    {
        printf("invalid number");
        return count ;
    }

    printf("enter number\n");
    scanf("%d",&num);

    max=num;
    min=num;
    ;

    for (i=0;i<count-1;i++)
    {
        printf("enter number\n");
        scanf("%d",&num);

        if (num >max)
        {
            max=num;
        }
        else if (num<min)
        {
            min=num;
        }

    }

    printf("================================\nmax = %d\nmin = %d",max,min);

    return 0;
}
