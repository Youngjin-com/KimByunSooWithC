#include <stdio.h>
int main() {
    // 층 수를 입력받습니다.
    int floor;
    printf("층 수를 입력하세요 : ");
    scanf("%d", &floor);
    
    
    // 층 수만큼 반복문을 실행합니다.
    for(int i = 1; i <= floor; i++) {
    
    
        // 층 높이에 맞는 공백을 출력합니다.
        for(int j = 1; j<= floor - i; j++){
            printf(" ");
        }
        
        // 층 높이만큼 별을 출력합니다.
        for(int k = 1; k <= i; k++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}