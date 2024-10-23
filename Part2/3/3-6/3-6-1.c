#include <stdio.h>

int main() {
  int x, t, a, b;

  scanf("%d", &x);
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    scanf("%d %d", &a, &b);

    x -= a * b;
  }

  if (x == 0) {
    printf("잘 계산했어요!");
  } else {
    printf("잘못 계산됐어요!");
  }

  return 0;
}
