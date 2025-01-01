#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1;


    printf("please insert a grade from 0 to 100\n");
    scanf("%d",&n1);

    if (n1<0||n1>100)
    {
        printf("invalid number\n");
        return 0;
    }
    if (n1/1==n1)
    {
        printf("input not integer\n");
        return 0;
    }

    if (n1<50)
    {
        printf("your grade is F\n");
    }
    else if (n1<60&&n1>=50)
    {
        printf("your grade is D\n");
    }
    else if (n1<70&&n1>=60)
    {
        printf("your grade is C\n");
    }
    else if (n1<80&&n1>=70)
    {
        printf("your grade is B\n");
    }
    else if (n1<100&&n1>=80)
    {
        printf("your grade is A\n");
    }

    return 0;
}
