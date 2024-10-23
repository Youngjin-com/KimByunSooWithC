#include <stdio.h>

int main() {
    int a, b, n;
    printf("두 숫자 : ");
    scanf("%d %d", &a, &b);

    printf("N : ");
    scanf("%d", &n);

    a = a + 1;

    while(a != b){
        if(a % n== 0){
            printf("%d ", a);
        }
        a++;
    }
    
    return 0;
}