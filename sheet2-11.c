#include <stdio.h>
#include <stdlib.h>

int main()

{
        unsigned int l,r,max=0,ltemp,rtemp;



    while (1)
    {
        printf("please enter L\n");
        scanf("%d",&l);
        printf("please enter R\n");
        scanf("%d",&r);

        ltemp=l;
        rtemp=r;

        for (;ltemp<=r;ltemp++)
        {
           // printf("L=%d   R=%d\n",ltemp,rtemp);
            for (rtemp=r;rtemp>=l;rtemp--)
            {
                if (ltemp>rtemp)
                {
                    continue;
                }
                printf("L=%d   R=%d\n",ltemp,rtemp);
                if ((ltemp^rtemp)>max)
                {
                    max=ltemp^rtemp;
                }


              //  rtemp=r;
            }

        }

        printf("max=%d\n",max);






    }




return 0;
}
