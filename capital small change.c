#include <stdio.h>
#include <stdlib.h>

int main()
{

    while (1)
    {
        char x;

        printf("enter a character\n");
        scanf("%c",&x);


        if (x>='A'&&x<='Z')
        {
            printf("it is capital letter\n");
        }

        else if (x>='a'&&x<='z')
        {
            printf("it is small\n");
            printf("%c\n",x-'a'+'A');
        }

        else
        {
            printf("not alphabetical %c\n",x);
        }
        fflush(stdin);
        printf("=====================================");
    }
return 0;
}
