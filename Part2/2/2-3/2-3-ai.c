#include <stdio.h>

int main() {
    // 삼각형의 높이 입력
    int n;
    scanf("%d", &n);

    // 삼각형을 저장할 배열
    int triangle[n][n];

    // 초기화
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            if(i == 0|| j == 0|| j == i) {
                triangle[i][j] = 1;
            } else{
               triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
        }
        // 출력
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i+1; j++) {
                printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}