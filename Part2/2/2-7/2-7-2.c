#include <stdio.h>

void swapCards(int* arr, int a, int b) {
  int temp;
  temp = arr[a - 1];
  arr[a - 1] = arr[b - 1];
  arr[b - 1] = temp;
  return;
}

int main() {
  int arr[5];
  int a, b;
  int* ptr = arr;

  printf("카드에 적힌 번호 : ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", ptr + i);
  }

  printf("바꿀 카드의 위치 : ");
  scanf("%d %d", &a, &b);

  swapCards(ptr, a, b);

  printf("실행 결과 : ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}