#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int i, num , pf =1 ;

        printf("==========================================================\nenter a positive integer number\n");
        scanf("%d",&num);

        if (num<=0)
        {
            printf("invalid number\n");
        }
        else if (num==1)
        {
            pf=0;
           i=1;
        }
        else
        {

            for ( i =1; i<num; i++)
            {
                if ((num/i==i)&&(num%i==0))
                {
                    pf = 0;
                    break;
                }
            }
        }

        if (pf==0)
        {
            printf("number is a perfect sqaure\n");
            printf("square root of %d = %d\n",i*i,i);
        }
        else if(pf!=0)
        {
            printf("number is not a perfect square\n");
        }
    }
    return 0;
}
