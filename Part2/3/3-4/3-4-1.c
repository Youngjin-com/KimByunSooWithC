#include <stdio.h>

int main() {
  int n;
  int floor = 1;
  int reverse = 0;

  scanf("%d", &n);
  n = n * 2;

  for (int i = 0; i < n - 1; i++) {
    for (int a = 0; a < floor; a++) {
      printf("*");
    }
    for (int j = 0; j < n - floor * 2; j++) {
      printf(" ");
    }
    for (int a = 0; a < floor; a++) {
      printf("*");
    }
    printf("\n");

    if (floor == n / 2) {
      reverse = 1;
    }

    if (reverse == 1) {
      floor--;
    } else {
      floor++;
    }
  }

  return 0;
}
