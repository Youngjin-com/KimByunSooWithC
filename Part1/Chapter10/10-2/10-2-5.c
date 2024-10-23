#include <stdio.h>
#include <string.h>

typedef struct{
  char name[10];
  int age;
} human;

int main(){
  human people[3];
  people[0].age = 20;
  strcpy(people[0].name, "김변수");
  people[1].age = 21;
  strcpy(people[1].name, "이매개");
  people[2].age = 19;
  strcpy(people[2].name, "박함수");

  for (int i = 0; i < 3; i++) {
    printf("%d번째 사람 이름: %s, 나이: %d\n", i + 1, people[i].name, people[i].age);
  }

  return 0;
}