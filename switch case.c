#include <stdio.h>
#include <stdlib.h>

int main()
{

    char op;
    int num1 , num2;

    while(1)
    {

        fflush(stdin);

        printf("enter expression\n");
        scanf("%d%c%d",&num1,&op,&num2);




        switch(op)
        {
        case '+' :
            printf("the sum %d %c %d = %d\n",num1,op,num2 ,num1+num2);
            break;

        case '-' :
            printf("the diff %d %c %d = %d\n",num1,op,num2 ,num1-num2);
            break;

        case '*' :
            printf("the multiplication of %d %c %d = %d\n",num1,op,num2,num1*num2);
            break;

        case '/':
            if(num2==0)
            {
                printf("division by zero not allowed\n");
                break;
            }
            printf("the division of %d %c %d = %d\n",num1,op,num2,num1/num2);
            break;



        }
        printf("=================================");

    }

    return 0;
}

