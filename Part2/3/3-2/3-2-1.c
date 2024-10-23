#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;

  printf("정렬할 숫자의 갯수를 입력하세요 : ");
  scanf("%d", &n);

  int* numList = (int*)malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &numList[i]);
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (numList[i] > numList[j]) {
        int temp = numList[i];
        numList[i] = numList[j];
        numList[j] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%d\n", numList[i]);
  }

  free(numList);

  return 0;
}
