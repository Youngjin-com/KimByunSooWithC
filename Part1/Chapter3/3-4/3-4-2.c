#include <stdio.h>

int main(){
    int x;
    int y;

    printf("첫 번째 숫자를 입력하세요 : ");
    scanf("%d", &x);
    printf("두 번째 숫자를 입력하세요 : ");
    scanf("%d", &y);
    printf("\n두 숫자의 합은 %d입니다.", x + y);

    return 0;
}