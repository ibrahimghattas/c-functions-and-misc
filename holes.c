#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number, num,thousands=0, hundreds=0, tens=0, ones=0 ,holes=0;


    printf("enter a number maximum 4 digits \n");
    scanf("%d",&number);


    num=number;



    for (int i =0;num>999;i++)
    {
        thousands++;
        num=num-1000;
    }
    for (int i =0;num>99;i++)
    {
        hundreds++;
        num=num-100;
    }
    for (int i =0;num>9;i++)
    {
        tens++;
        num=num-10;
    }

    for (int i =0;num>0;i++)
    {
        ones++;
        num=num-1;
    }

    if (thousands==0||thousands==4||thousands==6||thousands==9)
    {
        holes++;
    }
    if (thousands==8)
    {
        holes=holes+2;
    }

    if (hundreds==0||hundreds==4||hundreds==6||hundreds==9)
    {
        holes++;
    }
    if (hundreds==8)
    {
        holes=holes+2;
    }

    if (tens==0||tens==4||tens==6||tens==9)
    {
        holes++;
    }
    if (tens==8)
    {
        holes=holes+2;
    }

    if (ones==0||ones==4||ones==6||ones==9)
    {
        holes++;
    }
    if (ones==8)
    {
        holes=holes+2;
    }

    printf("the holes in %d is = to %d",number,holes);

    return 0;
}
