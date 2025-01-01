#include <stdio.h>
#include <stdlib.h>

int main()
{


        int num1 , num2 ,sum =0 ,pr1,pr2;

        printf("please enter two numbers\n");
        scanf("%d%d",&num1,&num2);

        pr1=num1;
        pr2=num2;

        if (num1>num2)
        {
            for (num1;num1>=num2;num1--)
            {
                printf("%d    ",num1-1);
                sum=sum+num1-1;
            }
        }
        else if (num2>num1)
        {
            for (num2;num2>=num1;num2--)
            {
                printf("%d    ",num2-1);
                sum=sum+num2-1;
            }
        }
        else


         printf("the two numbers are equal and their value = %d",num1);



        printf("\nthe total sum of numbers between %d and %d is = %d",pr1,pr2,sum);


    return 0;
}
