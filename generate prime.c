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


int main()

{
    int num;

    while (1)
    {
       scanf("%d",&num);
       GeneratePrime(num);
    }




    return 0;
}
