#include <stdio.h>
#include <string.h>

int main() {
  char myGrade[10];

  printf("등급을 입력하십시오 : ");
  scanf("%s", myGrade);

  char grade[10][10] = {"A+", "A", "B+", "B", "C+", "C", "D+", "D", "F"};
  int score = 100;
  int flag = 0;

  for (int i = 0; i < 9; i++) {
    if (!strcmp(grade[i], myGrade)) {
      if (i == 8) {
        printf("불합격");
      } else {
        printf("%d\n", 100 - (i) * 5);
      }
      flag = 1;
    }
  }

  if (flag == 0) {
    printf("잘못된 등급입니다.");
  }

  return 0;
}
