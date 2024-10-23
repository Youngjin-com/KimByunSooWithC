#include <stdio.h>

int main() {

  // 입력
  int n;
  scanf("%d", &n);

  //입력이 10보다 작다면 값 수정
  if (n < 10) {
    n = n * 10;
  }

  // 숫자놀이를 수행
  int condition = n;
  int count = 0;

  do {
    // 숫자 놀이 규칙에 따라 n을 업데이트합니다.
    int sum = n * 10 + n % 10;
    n = (n % 10) * 10 + sum % 10;
    count++;
  } while (n != condition);

  // 결과 출력
  printf("%d\n", count);

  return 0;
}
