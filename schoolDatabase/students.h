#include "person.h"
typedef struct student {
    char name [20];
    int age;
    char grade;
    person_t father;
    person_t mother;
    int NumberSiblings ;
    person_t* siblings;

}student_t;


void studentScan (student_t* stu);
