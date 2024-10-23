
#include <stdio.h>

int main() {
  int n;
  printf("N : ");
  scanf("%d", &n);
  int floor = 0;

  for (int i = n; i > 0; i--) {
    for (int j = 0; j < floor; j++) {
      printf(" ");
    }

    for (int k = 0; k < 2 * i - 1; k++) {
      printf("*");
    }

    floor++;
    printf("\n");
  }

  return 0;
}