#include "strings.h"
#include <stdio.h>
void string_scan(char*str,int maxsize)
{
    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    for(; str[i]!='\n'&&i<maxsize-1; )
    {
        i++;
        scanf("%c",&str[i]);

    }
    str[i]=0;
}
