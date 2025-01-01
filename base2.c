#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num , temp ;

    while(1)
    {



        printf("enter a number \n");
        scanf("%d",&num);

        temp=num;

        if (temp<=0)
        {
            printf("number is not valid\n");
            continue;
        }

        for (int i=0; ; i++)
        {
            if (temp==1)
            {
                printf("number %d is a base of 2\n",num);
                temp=0;
                break;
            }

            if (temp%2==0)
            {
                temp=temp/2;
            }
            else
            {
                printf("number %d is not a base of 2 \n",num);
                temp=0;
                break;
            }
        }

    }
    return 0;
}
