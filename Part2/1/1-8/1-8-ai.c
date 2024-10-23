#include <stdio.h>

int main() {
    // 숫자를 입력받습니다.
    int number;
    printf("숫자를 입력하세요 : ");
    scanf("%d", &number);

    // 숫자의 홀짝을 구분합니다.
    if(number % 2 == 1) {
        printf("홀!");
    } else{
        printf("짝!");
    }
    
    return 0;
}