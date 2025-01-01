#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num,mode,bit;
    char chr;

    while (1)
    {

        printf("please choose a mode\n1-set bit\n2-clear bit\n3-toggle bit\n4-read bit\n");
        scanf("%d",&mode);


        switch(mode)
        {
        case 1:  //set
            printf("==================================\n");

            printf("please enter a number and a bit to set\n");
            scanf("%d%d",&num,&bit);

            num= num | (1<<bit);

            printf("the number after setting bit #%d is %d\n",bit,num);
            printf("==================================\n");

            break;


        case 2: //clear
            printf("==================================\n");

            printf("please enter a number and a bit to clear\n");
            scanf("%d%d",&num,&bit);


            num = num & ~(1<<bit);



            printf("the number after clearing bit #%d is %d\n",bit,num);
            printf("==================================\n");

            break;


        case 3://toggle
            printf("==================================\n");

            printf("please enter a number and a bit to toggle\n");
            scanf("%d%d",&num,&bit);


            num = num ^ (1<<bit);



            printf("the number after toggling bit #%d is %d\n",bit,num);
            printf("==================================\n");

            break;

        case 4: // read
            printf("==================================\n");

            printf("please enter a number and a bit to read\n");
            scanf("%d%d",&num,&bit);
            int val=0;


            if (num & (1<<bit))
            {
                val =1 ;
            }



            printf("the read bit #%d in the number %d is = %d\n ",bit,num,val);
            printf("==================================\n");
            break;

        default:
            printf("======================================\n");
            printf("please enter a valid number ");
            printf("\n======================================\n");


        }



    }
    return 0;
}
