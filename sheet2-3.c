#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num,result;


    while (1)
    {
        result=0;

        printf("please enter a number\n");
        scanf("%d",&num);



        while ( num!=0 )
        {

            result=(result*10)+(num%10);
            num=num/10;
        }


        printf("result=%d\n",result);




    }




return 0;
}
