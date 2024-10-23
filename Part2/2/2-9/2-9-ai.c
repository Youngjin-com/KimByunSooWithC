#include <stdio.h>

int main() {
  // 점수를 입력받습니다.
  char grade[10];

  printf("등급을 입력하십시오 : ");
  scanf("%s", grade);

  // 점수에 따라 평점을 계산합니다.
  switch (grade[0]) {
  case 'A':
    if (grade[1] == '+') {
      printf("100\n");
    } else {
      printf("95\n");
      break;
    }
  case 'B':
    if (grade[1] == '+') {
      printf("90\n");
    } else {
      printf("85\n");
    }
    break;
  case 'C':
    if (grade[1] == '+') {
      printf("80\n");
    } else {
      printf("75\n");
    }
    break;
  case 'D':
    printf("75\n");
    break;
  case 'F':
    printf("불합격\n");
    break;
  default:
    printf("잘못된 등급입니다.\n");
  }

  return 0;
}
