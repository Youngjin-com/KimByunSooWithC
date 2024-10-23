#include <stdio.h>

int main() {
  char grade[3];
  int score = 55;

  printf("등급을 입력하십시오 : ");
  scanf("%s", grade);

  if (grade[0] == 'A') {
    score = score + 40;
  }
  if (grade[0] == 'B') {
    score = score + 30;
  }
  if (grade[0] == 'C') {
    score = score + 20;
  }
  if (grade[0] == 'D') {
    score = score + 10;
  }
  if (grade[1] == '+') {
    score = score + 5;
  }

  if (grade[0] == 'F') {
    printf("불합격");
  } else if (score == 55) {
    printf("잘못된 등급입니다.");
  } else {
    printf("%d", score);
  }

  return 0;
}
