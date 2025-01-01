#include <stdio.h>
#include <stdlib.h>

int main()
{
while(1){
    int num ,prime=1;

    printf("enter positive integer number \n");
    scanf("%d",&num);

        if (num<=0)
        {
            printf("invalid number\n");
        }
        else
        {
            for (int i = 2; i<num; i++)

            {
                if (num%i==0)
                {
                    printf("number is not prime\n");
                    prime=0;
                    break;
                }

            }
            if (prime==1)
            {
                printf("number is prime\n");
            }


        }
}

    return 0;
}
