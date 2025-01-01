#include <stdio.h>
#include <stdlib.h>

int main()
{


    int num1 , num2 ,sum =0 ,pr1,pr2,prime=0,num;

    printf("please enter two numbers\n");
    scanf("%d%d",&num1,&num2);



    if (num1>num2)
    {
        printf("the prime numbers between %d and %d are \n",num1,num2);
        for (num2++; num1>num2; num2++)
        {



            for (int i = 2; i<num2; i++)

            {
                prime=1;
                if (num2%i==0)
                {

                    prime=0;
                    break;

                }

            }


            if (prime==1)
            {
                printf("%5d   ",num2);
                prime=0;

            }




        }
    }
    else if (num2>num1)
    {
        for (num1++; num2>num1; num1++)
        {
            for (int i = 2; i<num1; i++)

            {
                prime=1;
                if (num1%i==0)
                {

                    prime=0;
                    break;

                }

            }


            if (prime==1)
            {
                printf("%5d",num1);
                prime=0;

            }
        }
    }



    return 0;
}
