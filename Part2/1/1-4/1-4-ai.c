#include <stdio.h>
int main() {
    // 김변수씨의 답안을 입력받습니다.
    printf("김변수씨의 답안 : ");
    char answer[5];
    scanf("%s", answer);
    
    // 문제 점수를 입력받습니다.
    printf("문제 점수 : ");
    int scores[5];
    for(int i = 0; i < 5; i++) {
        scanf("%d", &scores[i]);
    }
    // 문제의 정답을 입력받습니다.
    printf("문제의 정답 : ");
    char correct[5];
    scanf("%s", correct);
    
    // 맞힌 문제의 점수를 계산합니다.
    int correct_score = 0;
    for(int i = 0; i < 5; i++) {
        if(answer[i] == correct[i]) {
            correct_score += scores[i];
        }
    }
    
    // 총점을 출력합니다.
    printf("획득한 점수 : %d\n", correct_score);
    return 0;
}