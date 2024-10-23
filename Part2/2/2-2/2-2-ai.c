#include <stdio.h>

int main() {
    // 두 숫자를 입력받습니다.
    int start, end;
    printf("두 숫자 : ");
    scanf("%d %d", &start, &end);

    // 소수를 찾습니다.
    for(int i = start; i<= end; i++) {
        // 1보다 크고 자기 자신보다 작거나 같은 수로 나누어 떨어지지 않으면 소수입니다.
        int is_prime = 1;
        for(int j = 2; j * j <= i; j++) {
            if(i % j== 0) {
            is_prime = 0;
            break;
            }
        }
        // 소수인 경우 출력합니다.
        if(is_prime) {
            printf("%d ", i);
        }
    }
    
    return 0;
}