#include <stdio.h>
#include <stdlib.h>

int IsPrime(int n)
{
    if (n==0||n==1)
    {
        return 0;//not prime
    }
    for (int i =2;i<n;i++)
    {
        if (n%i==0)
        {
            return 0;//not prime
        }
    }
    return 1;//prime
}

void GeneratePrime(int n)
{
        int  check =0;
        int i=2;
        if (n<=0)
        {
            return;
        }

        while (n)
        {
            for (;i<=0xffffffff;i++)

            {
                if (IsPrime(i)==1)
                {
                    printf("prime %d\n",i);
                    n--;
                    i++;
                    break;
                }
            }
        }

}


void SwapNum(int *p1 ,int* p2)
{
    int temp = *p1;
    *p1=*p2;
    *p2=temp;


}

int Pow (int n,int p)
{
    int total=1;
    if (p==0)
        {
            return 1;

        }
        else if (p<0 )
        {
         for (p;p<0;p++)
         {
             total = total*n;
         }

            return (1/total );

        }
        else
        {
           for (p;p>0;p--)
         {
             total = total*n;
         }
         return total;
        }
}


int fact (int n)
{
    int result=1;
    if (n<0)
    {
        return 0;
    }
    else if (n==0)
    {
        return 1 ;
    }
    else
    {
        for (;n>0;n--)
        {
            result*=n;
        }
    }
    return result;
}

void PrintBin0 (int num)
{
    int i;
    for ( i = 31;i >=0;i--)
    {
        if ((num & (1<<i))==0)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    printf("\n");
    return;
}

void PrintBin (int num)
{
 int   flag=0;
 int temp=num;

        for(int i=31; i>=0; i--)
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




int func1 (float x)
{
        float z;
        int result,temp;
        temp = x;
        z=x-temp;

        if (z<0.5)
        {
            result=temp;
            return result;
        }
        else
        {
            result=temp+1;
            return result;
        }
}


int main()

{
    float num1 ;
    int num2;

    while (1)
    {
        printf("enter numbers\n");
       scanf("%f",&num1);


       num2 = func1(num1);
       printf("%d\n",num2);

    }




    return 0;
}
