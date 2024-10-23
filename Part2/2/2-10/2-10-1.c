#include <stdio.h>

int main() {
  int a[9];

  for (int i = 1; i < 4; i++) {
    scanf("%d %d %d", &a[3 * i - 2], &a[3 * i - 1], &a[3 * i]);
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 8; j > i; j--) {
      if (a[i] == a[j]) {
        printf("틀립니다.");
        return 0;
      }
    }
  }
  
  printf("올바릅니다.");
  return 0;
}
