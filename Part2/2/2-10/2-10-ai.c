#include <stdio.h>

int main() {
  // 스도쿠 칸을 입력받습니다.
  int sudoku[3][3];

  // 3x3 박스에서 중복이 없는지 확인합니다.
  int box_index;
  int check[10] = {0,};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      // 중복된 숫자가 있으면
      if (check[sudoku[i][j]] == 1) {
        printf("틀립니다.\n");
        return 0;
      }
      // 숫자를 체크합니다.
      check[sudoku[i][j]] = 1;
    }
  }

  // 모든 조건을 통과하면 정답입니다.
  printf("올바릅니다.\n");
  return 0;
}
