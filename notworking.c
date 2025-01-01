#include <stdio.h>
#include <stdlib.h>

int main()

{
    unsigned int num,count=0,max=0,flag=0;



    while (1)
    {
        printf("enter a number\n");
        scanf("%d",&num);


        for (int i =31; i>=0; i--)
        {
            if (flag==0&&((num & (1<<i))==0))
            {
                continue;
            }
            else if (flag==0&&(num & (1<<i)))
            {
                count=0;
                flag=1;
                continue;
            }
            if (flag&&(num & (1<<i)))
            {
                if (count>max)
                {
                    max=count;
                }
                count=0;
                continue;
            }
            else if (flag && (num & (1<<i))==0)
            {
                count++;
                continue;
            }


        }
        printf("max=%d\n",max);






    }




    return 0;
}
