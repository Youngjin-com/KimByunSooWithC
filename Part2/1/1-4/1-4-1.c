#include <stdio.h>
int main(){
    char myAnswer[5];
    char answer[5];
    int score[5];
    int totalScore=0;

    printf("김변수씨의 답안 : ");
    for(int i=0; i<5; i++){
        scanf("%c", &myAnswer[i]);
    }
    
    printf("문제 점수 : ");
    for(int i=0; i<5; i++){
        scanf("%d", &score[i]);
    }

    printf("문제의 정답 : ");
    for(int i=0; i<5; i++){
        scanf("%c", &answer[i]);
        if(myAnswer[i] == answer[i]){
            totalScore += score[i];
        }
    }
    
    printf("획득한 점수 : %d\n", totalScore);
    
    return 0;
}