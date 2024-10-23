#include <stdio.h>
#include <string.h>

int main() {
  // 입력
  char str[ ] = "";
  scanf("%s", str);
  int count = 2;

  // 출력
  for (int i = 0; i < strlen(str); i++) {
    //문자 부풀리고 출력하기
    for (int j = 0; j < count; j++) {
      printf("%c", str[i]);
    }
    count++;
  }

  printf("\n");
  return 0;
}