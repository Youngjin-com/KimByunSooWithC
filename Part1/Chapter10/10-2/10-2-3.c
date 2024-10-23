#include <stdio.h>

typedef struct{
  char name[10];
  int korean;
  int math;
  int english;
  int science;
  int art;
  int computer;
} score;

int main() {
  score score_result = {"김변수", 90, 50, 60, 95, 30, 100};
  
  return 0;
}