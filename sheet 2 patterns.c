#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num,pat,i,j,k;

    while (1)
    {
        printf("enter number of lines\n");
        scanf("%d",&num);
        printf("please choose pattern\n");
        scanf("%d",&pat);

        switch(pat)
        {




        //first pattern
        case(1):
            for (; num>0; num--)
            {
                for (i =num; i>0; i--)
                {
                    printf("*");



                }
                printf("\n");
            }
            break;




        case (2):
            //second pattern



            for (i =1; i<=num; i++)
            {
                for (j=1; j<=i; j++)
                {
                    printf("*");

                }
                printf("\n");
            }
            break;



        //third
        case (3):

            for (i=1; i<=num; i++)
            {
                for(j=1; j<=num; j++)
                {
                    if (j==i || j == num -i+1 )
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }

                }
                printf("\n");
            }

            break;


            //fourth
            case (4):

                 for (i=1;i<=num;++i)
                 {
                     k=0;
                     for (j=1;j<=num-i;++j)
                     {
                         printf(" ");
                     }
                     while (k!=2*i-1)
                     {
                         printf("*");
                         ++k;
                     }
                     printf("\n");
                 }
                break;

        }
    }




    return 0;
}
