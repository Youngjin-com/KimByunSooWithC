#include <stdio.h>

int main(){
    int score;

    printf("김변수의 C언어 책은 몇 점인지 입력하세요 : ");
    scanf("%d", &score);
    printf("\n이 책은 %d점짜리 책이다.", score);

    return 0;
}