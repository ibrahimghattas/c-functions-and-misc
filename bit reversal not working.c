#include <stdio.h>
#include <stdlib.h>

int main()

{


/*unsigned int reverseBits(unsigned int num)
{
    unsigned int count = sizeof(num) * 8 - 1;
    unsigned int reverse_num = num;

    num >>= 1;
    while (num) {
        reverse_num <<= 1;
        reverse_num |= num & 1;
        num >>= 1;
        count--;
    }
    reverse_num <<= count;
    return reverse_num;
}*/






    unsigned char num,result=0,count;



    while (1)
    {
       count=7;

       printf("enter a number \n");
       scanf("%d",&num);
       result|=num&1;
       num>>=1;


        while (num)


            {
                result<<=1;
                result|= (num &1);
                num >>= 1;
                count--;


                printf("%d\n",result);


            }

        result= result << count;
        printf("result = %u\n",result);



    }




    return 0;
}
