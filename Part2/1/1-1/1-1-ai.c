#include <stdio.h>
int main() {
    // 해야 할 일 목록
    char *todo_list[]= {
        "[ ] 김변수랑 놀기",
        "[X] 일기 쓰기",
        "[ ] 운동하고 건강해지기",
    };
    // 출력
    printf("<오늘 해야 할 일>\n");
    printf("------------------------\n");
    
    for(int i = 0; i < 3; i++) {
        printf("%s\n", todo_list[i]);
    }
    
    return 0;
}