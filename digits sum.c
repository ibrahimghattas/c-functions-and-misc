#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num,thousands=0, hundreds=0, tens=0, ones=0 ,
    x,y,total=0;

while(1)
{
total=0;

    printf("enter a number  \n");
    scanf("%d",&num);




    for (y=0;num>=1;y++)
    {
        x=num%10;

        total=total+x;
        num=num/10;
    }
    printf("the total is = %d\n",total);


//other answer before fix
    /*for (int i =0;num>999;i++)
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

    printf("thous=%d    hund = %d\ntens =%d     ones =%d\n",thousands,hundreds,tens,ones);
    printf("sum is %d",thousands+hundreds+tens+ones);*/
}
    return 0;
}
