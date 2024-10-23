#include <stdio.h>

typedef struct {
  char name[10];
  int age;
} human;

int main() {
  human h1 = {"김변수", 20};
  human h2 = {"이매개", 21};
  human h3 = {"박함수", 19};
  
  printf("첫 번째 사람 이름 : %s, 나이 : %d\n", h1.name, h1.age);
  printf("두 번째 사람 이름 : %s, 나이 : %d\n", h2.name, h2.age);
  printf("세 번째 사람 이름 : %s, 나이 : %d\n", h3.name, h3.age);
  return 0;
}