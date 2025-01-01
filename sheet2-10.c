#include <stdio.h>
#include <stdlib.h>

int main()

{
    unsigned int num,count=0,max=0,flag=0;



    while (1)
    {
        printf("enter a number\n");
        scanf("%d",&num);

        count=0;
        max=0;
        flag=0;
        for (; num>0; num=num>>1)
        {


                if (num%2)
                {
                    if (count>max)
                    {
                        max = count;

                    }
                    count =0;
                        flag=1;
                }
                else if (flag)
                {
                    count++;
                }


        }
        printf("max=%d\n",max);






    }




    return 0;
}
