#include <stdio.h>
#include <stdlib.h>

int main()
{
    while (1){
    int n1;

    printf("please enter a number\n");
    scanf("%d",&n1);


    if (n1%2)
    {
        printf("the number %d is odd\n",n1);
    }

    else
    {
        printf("the number %d is even\n",n1);
    }
    }
}
