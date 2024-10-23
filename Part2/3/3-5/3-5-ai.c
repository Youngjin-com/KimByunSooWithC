#include <stdio.h>

int main() {
  int a, b, c, d, e, f, g;

  // 입력
  scanf("%d %d", &a, &b);

  // (1) 구하기
  c = a * (b % 10);

  // (2) 구하기
  d = a * (b % 100 / 10);

  // (3) 구하기
  e = a * (b / 100);

  // (4) 구하기
  f = a * b;

  // 결과 출력
  printf("%d\n", c);
  printf("%d\n", d);
  printf("%d\n", e);
  printf("%d\n", f);

  return 0;
}
