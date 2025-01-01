#include <stdio.h>
#include <stdlib.h>

int main()

{
    int temp,i,flag=0;
    unsigned int    num ;
    while (1)

    {

        printf("enter number\n");
        scanf("%d",&num);

        temp=num;


        flag=0;

        for(i=31; i>=0; i--)
        {
            if ((flag==0)&&((temp&(1<<i))==0))
            {
                continue;
            }
            else if ((flag==0)&&temp&(1<<i))
            {
                flag=1;
                printf("1");
            }
            else if ((flag==1)&&temp&(1<<i))
            {
                flag=1;
                printf("1");
            }
            else if ((flag==1)&&((temp&(1<<i))==0))
            {
                flag=1;
                printf("0");
            }
        }
        printf("\n");




    }
    return 0;
}
