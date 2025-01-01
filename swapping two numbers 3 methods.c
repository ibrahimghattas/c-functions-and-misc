#include <stdio.h>
#include <stdlib.h>

int main()
{
        int num1,num2,temp;

       printf("enter two numbers x and y\n");
       scanf("%d%d",&num1,&num2);
       printf("the two enterd numbers are x= %d  and y=%d\n",num1,num2 );

    //method 1

        temp=num1;
        num1=num2;
        num2=temp;

        printf("the two numbers reversed  x=%d  and y=%d\n",num1,num2);

     //method 2

       printf("the two numbers reversed  x=%d  and y=%d\n",num2,num1);

    //method 3

        num1 = num1+num2;
        num2 = num1-num2;
        num1 = num1-num2;

        printf("the two numbers reversed  x=%d  and y=%d\n",num1,num2);

    return 0;
}
