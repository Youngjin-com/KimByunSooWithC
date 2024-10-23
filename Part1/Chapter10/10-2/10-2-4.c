#include <stdio.h>
#include <string.h>

typedef struct{
  char name[10];
  int korean;
  int math;
  int english;
  int science;
  int art;
  int computer;
} score;

int main(){
  score s;

  strcpy(s.name, "김변수");
  s.korean = 90;
  s.math = 50;
  s.english = 60;
  s.science = 95;
  s.art = 30;
  s.computer = 100;

  printf("%s 님의 시험 성적 결과입니다.\n", s.name);
  printf("국어: %d, 수학: %d, 영어: %d\n", s.korean, s.math, s.english);
  printf("과학: %d, 미술: %d, 컴퓨터: %d", s.science, s.art, s.computer);
  
  return 0;
}
