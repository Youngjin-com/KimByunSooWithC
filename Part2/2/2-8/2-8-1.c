#include <stdio.h>
#include <string.h>

typedef struct {
  char name[50];
  int age;
  int num;
} Student;

int main() {
  Student students[3];

  for (int i = 0; i < 3; i++) {
    printf("학생 %d 정보 입력\n", i + 1);
    printf("이름/나이/학번 : ");
    scanf("%s", students[i].name);
    scanf("%d", &students[i].age);
    scanf("%d", &students[i].num);
  }

  int maxNum = students[0].num;
  int maxIndex = 0;

  for (int i = 1; i < 3; i++) {
    if (students[i].num > maxNum) {
      maxNum = students[i].num;
      maxIndex = i;
    }
  }

  printf("가장 큰 학번을 가진 학생의 이름: %s\n", students[maxIndex].name);
  return 0;
}