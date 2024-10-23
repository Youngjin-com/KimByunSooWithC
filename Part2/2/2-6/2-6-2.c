#include <stdio.h>

int main() {
  int a = 1;
  int b = 1;

  for (int i = 2; i < 8; i++) {
    if (i % 2 == 0) {
      a = a + b;
    } else {
      b = a + b;
    }
  }

  printf("%d\n", a + b);

  return 0;
}