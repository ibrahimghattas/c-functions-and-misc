#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,sum =0,flag=0;

    while (1)
    {

        printf("enter an even number to add \n");
        scanf("%d",&num);

        if (num%2==0)
        {
            sum=sum+num;
            printf("Sum = %d\n",sum);
        }
        else if (num%2!=0&&flag==0)
        {
            flag =1;

            for(;;)
            {


                printf("enter an even number to add \n");
                scanf("%d",&num);

                if (num%2==0)
                {
                    sum=sum+num;
                    printf("Sum = %d\n",sum);
                }
                else if (num%2!=0&&flag==1)
                {
                    printf("bye");
                    return 10;
                }

            }
        }



    }

    return 0;
}
