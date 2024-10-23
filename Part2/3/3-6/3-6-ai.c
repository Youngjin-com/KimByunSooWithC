#include <stdio.h>

int main() {

  // 입력

  int x;
  int n;

  scanf("%d", &x);
  scanf("%d", &n);

  // 계산

  int total = 0;

  for (int i = 0; i < n; i++) {

    int a, b;

    scanf("%d %d", &a, &b);

    total += a * b;
  }

  // 출력

  if (total == x) {

    printf("잘 계산했어요!");
  } else {

    printf("잘못 계산됐어요!");
  }

  return 0;
}
