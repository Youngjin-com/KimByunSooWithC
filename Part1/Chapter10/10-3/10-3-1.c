#include <stdio.h>
#include <string.h>

typedef union{
    char name[50];
    int age;
    int grade;
} Student;

int main(){
    Student student1;

    strcpy(student1.name, "Student1");
    student1.age = 19;

    printf("%s\n", student1.name);
    printf("%d\n", student1.age);
    printf("%d\n", student1.grade);

    return 0;
}