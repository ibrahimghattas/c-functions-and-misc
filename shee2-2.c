#include <stdio.h>
#include <stdlib.h>

int main()

{
    int num;
    char chr;

    while (1)

    {
        fflush(stdin);

    printf("enter a character and a number respectively\n");
    scanf("%c%d",&chr,&num);

    if (num%2==0)
    {
        printf("number is even    %c\n",chr);

    }
    else
    {
        if (chr>='a' && chr<='z' )
        {
            printf("%c char is SMALL and changed to %c\n",chr,chr-32);
        }
        else if (chr>='A' && chr<='Z')
        {
            printf("%c char is CAPITAL and changed to %c\n",chr,chr+32);
        }
    }





    }
    return 0;
}
