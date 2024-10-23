#include <stdio.h>

int main() {
  // 피보나치 수열을 저장할 배열
  int fibonacci[10];

  // 첫 번째와 두 번째 피보나치 수 초기화
  fibonacci[0] = 0;
  fibonacci[1] = 1;

  // 세 번째 피보나치 수부터 계산
  for (int i = 2; i < 10; i++) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
  }

  // 10번째 피보나치 수 출력
  printf("%d\n", fibonacci[9]);
  return 0;
}