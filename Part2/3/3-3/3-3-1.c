#include <stdio.h>

long factorial(int n) {
  if (n == 1) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);

  if (n == 0) {
    printf("%d", 1);
    return 0;
  }

  printf("%ld", factorial(n));

  return 0;
}
