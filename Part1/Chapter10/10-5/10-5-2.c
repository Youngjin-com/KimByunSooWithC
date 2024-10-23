#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    int age;
    float height;
} Person;

int main(){
    Person person1;
    
    strcpy(person1.name, "Kimbyeonsu");
    person1.age = 30;
    person1.height = 175.5;

    Person* ptrPerson;
    ptrPerson = &person1;

    printf("Name: %s\n", ptrPerson->name);
    printf("Age: %d\n", ptrPerson->age);
    printf("Height: %.2f\n", ptrPerson->height);

    return 0;
}
