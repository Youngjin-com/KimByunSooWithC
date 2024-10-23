#include <stdio.h>

int main() {
    int a, b, n;
    // 두 숫자를 입력받습니다.
    printf("두 숫자 : ");
    scanf("%d %d", &a, &b);

    // 배수를 알고 싶은 숫자를 입력받습니다.
    printf("N : ");
    scanf("%d", &n);

    // a와 b가 바뀌어 있을 경우를 대비하여 a와 b의 값을 교환합니다.
    if(a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    // 두 숫자 사이의 숫자를 반복문을 통해 순회합니다.
    for(int i = a + 1; i < b; i++) {
        // i가 n의 배수일 경우 출력합니다.
        if(i % n == 0) {
            printf("%d\n", i);
        }
    }
    
    return 0;
}