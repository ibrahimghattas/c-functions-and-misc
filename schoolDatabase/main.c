#include <stdio.h>
#include <stdlib.h>

#include "students.h"

 student_t students[100];


int main()
{
    studentScan(&students[0]);
    printf("%s\n",students[0].name);
    printf("%d\n",students[0].age);
    printf("%c\n",students[0].grade);
    return 0;
}
