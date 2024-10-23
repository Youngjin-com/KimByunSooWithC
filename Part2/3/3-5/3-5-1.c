#include <stdio.h>

int main() {
  int a, b, temp;

  scanf("%d %d", &a, &b);

  temp = b % 10;
  printf("%d\n", temp * a);

  temp = b / 10;
  temp = temp % 10;
  printf("%d\n", temp * a);

  temp = b / 100;
  printf("%d\n", temp * a);

  printf("%d", a * b);

  return 0;
}
