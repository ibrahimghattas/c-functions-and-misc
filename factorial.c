#include <stdio.h>
#include <stdlib.h>

int main()
{

    while(1){
        int num , temp ;
        long  long total=1;


        printf("enter number\n");
        scanf("%d",&num);


        temp=num;

        if (num<=0)
        {
            printf("invalid , enter a positive int");
        }
        else
        {
            for (temp;temp>0;temp--)
            {
                total = total*temp;
            }
            printf("factorial of %d is = %lld\n",num,total);
        }

    }
    return 0;
}
