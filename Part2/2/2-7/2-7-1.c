#include <stdio.h>

void swapCards(int cards[], int position1, int position2) {
  int temp = cards[position1 - 1];
  cards[position1 - 1] = cards[position2 - 1];
  cards[position2 - 1] = temp;
}

int main() {
  int cardCount = 5;
  int cards[cardCount];

  printf("카드에 적힌 번호: ");
  for (int i = 0; i < cardCount; i++) {
    scanf("%d", &cards[i]);
  }

  int position1, position2;
  printf("바꿀 카드의 위치: ");
  scanf("%d %d", &position1, &position2);

  swapCards(cards, position1, position2);

  printf("실행 결과: ");
  for (int i = 0; i < cardCount; i++) {
    printf("%d ", cards[i]);
  }

  return 0;
}
