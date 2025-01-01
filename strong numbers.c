#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num , temp,y ,sum=0,x;
    long long fact=1;
    while (1)

    {



        printf("please enter an number \n");
        scanf("%d",&num);
        temp=num;

        if(temp==1||temp==2)
                {
                    printf("%d is a strong number\n",num);
                    continue;
                }

        for (y=0; temp>=1; y++)
        {

            x=temp%10;



            for (x; x>0; x--)
            {

                fact=fact*x;


            }




            temp=temp/10;
            sum=sum+fact;
            fact=1;


        }

        if (sum==num)
        {
            printf("%d is a strong number\n",num);
        }
        else
        {
            printf("%d is NOT a strong number\n",num);
        }
        sum=0;


    }
    return 0;
}
