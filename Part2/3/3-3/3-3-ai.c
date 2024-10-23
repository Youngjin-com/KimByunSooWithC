#include <stdio.h>

long factorial(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * factorial(n - 1);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%ld\n", factorial(n));
  return 0;
}
