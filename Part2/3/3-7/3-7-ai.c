#include <stdio.h>
#include <string.h>

int main() {

  // 이전 단어
  char previous_word[10] = "";

  // 현재 단어
  char current_word[10] = "";

  // 게임 진행 여부
  int is_playing = 1;

  // 이전 단어 입력받기
  scanf("%s", previous_word);

  while (is_playing) {

    // 현재 단어 입력 받기
    scanf("%s", current_word);

    // 이전 단어와의 끝 단어 일치 여부 확인
    if (current_word[0] != previous_word[strlen(previous_word) - 1]) {
      is_playing = 0;
    }

    // 이전 단어 저장
    strcpy(previous_word, current_word);
  }

  // 게임 종료 여부 출력
  if (is_playing == 0) {
    printf("게임 오버!\n");
  }

  return 0;
}
