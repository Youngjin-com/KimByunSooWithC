#include <stdio.h>
#include <stdlib.h>

int main() {

  // 사용 시간 정보를 입력받습니다.
  int times[10][2];
  for (int i = 0; i < 10; i++) {
    scanf("%d %d", &times[i][0], &times[i][1]);
  }

  // 사용 시간을 오름차순으로 정렬합니다.
  for (int i = 0; i < 10; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (times[i][1] > times[j][1]) {
        int temp[2];
        temp[0] = times[i][0];
        temp[1] = times[i][1];
        times[i][0] = times[j][0];
        times[i][1] = times[j][1];
        times[j][0] = temp[0];
        times[j][1] = temp[1];
      }
    }
  }

  // 사용 가능한 횟수를 계산합니다.
  int count = 1;
  int end = times[0][1];
  for (int i = 1; i < 10; i++) {
    if (end <= times[i][0]) {
      count++;
      end = times[i][1];
    }
  }

  // 결과를 출력합니다.
  printf("%d명이 사용할 수 있습니다.\n", count);
  return 0;
}
