#include <stdio.h>

// 학생 정보를 저장하는 구조체
typedef struct {
  char name[20];
  int age;
  int grade;
  int student_id;
} student;

// 학생 정보를 입력받는 함수
void input_student(student* s) {
  printf("이름/나이/학번 : ");
  scanf("%s %d %d", s->name, &s->age, &s->student_id);
  s->grade = s->student_id / 100;
}

// 학번이 가장 큰 학생의 이름을 출력하는 함수
void print_max_student_name(student students[]) {
  int max_student_id = 0;
  int max_student_index = 0;

  for (int i = 0; i < 3; i++) {
    if (students[i].student_id > max_student_id) {
      max_student_id = students[i].student_id;
      max_student_index = i;
    }
  }

  printf("가장 큰 학번을 가진 학생의 이름: %s\n", students[max_student_index].name);
}

int main() {
  // 학생 정보를 저장할 구조체 배열
  student students[3];

  // 학생 정보를 입력받음
  for (int i = 0; i < 3; i++) {
    input_student(&students[i]);
  }

  // 학번이 가장 큰 학생의 이름을 출력
  print_max_student_name(students);
  return 0;
}
