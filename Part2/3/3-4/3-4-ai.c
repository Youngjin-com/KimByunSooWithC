#include <stdio.h>

int main() {
  // 입력
  int n, temp;
  scanf("%d", &n);

  // 중간까지의 별모양 출력
  for (int i = 1; i < n + 1; i++) {
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    for (int j = 0; j < 2 * (n - i); j++) {
      printf(" ");
    }
    for (int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }

  // 아랫부분의 별모양 출력
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n - i; j++) {
      printf("*");
    }
    for (int j = 0; j < 2 * i; j++) {
      printf(" ");
    }
    for (int j = 0; j < n - i; j++) {
      printf("*");
    }
    printf("\n");
  }

  return 0;
}
