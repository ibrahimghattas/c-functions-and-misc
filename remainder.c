#include <stdio.h>
#include <stdlib.h>

int main()
{

        int num1,num2,last=0 ,temp;


        printf("enter first operand to find remainder \n");
        scanf("%d",&num1);
        printf("enter second operand to find remainder \n");
        scanf("%d",&num2);


        if (num2==0)
        {
            printf("error division by zero\n");
            return;
        }

        else if (num1<0)
        {
            num1=-num1;
            if (num2<0)
            {
                num2=-num2;
            }
            for (num2;num2<=num1;   )
            {
                num1=num1-num2;

            }
            last=-num1;
            printf("%d",last);
            return;

        }
        else if (num2<0)
        {
            num2=-num2;



        }


         for (num2;num2<=num1;   )
            {
                num1=num1-num2;

            }
            last=num1;


     printf("%d\n",last);

    return 0;
}
