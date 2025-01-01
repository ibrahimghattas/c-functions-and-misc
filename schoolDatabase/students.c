#include "students.h"
#include <stdio.h>

void studentScan (student_t* stu)
{
    printf("enter student name\n");
    string_scan(stu->name,20);

    printf("enter students age \n");
    scanf("%d",&stu->age);

    printf("enter student grade\n");
    fflush(stdin);
    scanf("%c",&stu->grade);

}

