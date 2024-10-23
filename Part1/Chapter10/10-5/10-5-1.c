#include <stdio.h>

typedef struct{
    char name[50];
    int age;
    float height;
} Person;

int main(){
    Person person1;

    struct Person* ptrPerson;
    ptrPerson = &person1;

    printf("%p", ptrPerson);
    return 0;
}
