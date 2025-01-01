#include <stdio.h>
#include <stdlib.h>

int main()
{
        int num , pow ,total=1 ;

        printf("enter a number\n");
        scanf("%d",&num);
        printf("enter a power\n");
        scanf("%d",&pow);


        if (pow==0)
        {
            printf("total= 1");

        }
        else if (pow<0 )
        {
         for (pow;pow<0;pow++)
         {
             total = total*num;
         }

            printf("your total is 1/%d",total);

        }
        else
        {
           for (pow;pow>0;pow--)
         {
             total = total*num;
         }
         printf("your total is = %d",total);
        }

    return 0;
}
