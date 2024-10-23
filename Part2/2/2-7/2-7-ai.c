#include <stdio.h>

// 카드를 섞는 함수
void shuffle(int cards[], int a, int b) {
  // 두 카드의 값을 교환
  int temp = cards[a];
  cards[a] = cards[b];
  cards[b] = temp;
}

int main() {
  // 카드에 적힌 번호
  int cards[5];

  printf("카드에 적힌 번호 : ");
  for (int i = 0; i < 5; i++) {
    scanf("%d", &cards[i]);
  }

  // 바꿀 카드의 위치
  int a, b;
  printf("바꿀 카드의 위치 : ");
  scanf("%d %d", &a, &b);

  // 카드를 섞음
  shuffle(cards, a - 1, b - 1);

  // 섞인 카드를 출력
  printf("실행 결과 : ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", cards[i]);
  }

  return 0;
}