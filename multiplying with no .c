#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1)

    {


        int num1,num2,total=0 ,temp;


        printf("enter two numbers to multiply\n");
        scanf("%d%d",&num1,&num2);

        if (num1==0||num2==0)
        {
            printf("total=0\n");
            continue;
        }

         if (num1<0&&num2<0)
        {
            num1=-num1;
            num2=-num2;
        }

        //swapping to solve negatove number
        if (num2<0)
        {
            temp=num1;
            num1=num2;
            num2=temp;
        }


        for (num2; num2>0; num2--)
        {
            total=total+num1;
        }

        printf("total = %d\n",total);


    }
    return 0;
}
