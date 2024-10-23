#include <stdio.h>
int main() {
    // 알파벳의 ASCII 코드를 이용하여 거리를 구합니다.
    char a, b;
    printf("두 개의 알파벳을 입력해주세요 : ");
    scanf("%c %c", &a, &b);
    
    
    // 대문자와 소문자를 구분합니다.
    if(a < 'A'|| (a > 'Z' && a < 'a') || a > 'z') {
        printf("올바르지 않은 문자입니다.\n");
        return 0;
    }
    
    if(b < 'A'|| (b > 'Z' && b < 'a') || b > 'z') {
        printf("올바르지 않은 문자입니다.\n");
        return 0;
    }
    if(b > a){
        printf("%c와 %c 사이의 거리 : %d\n", a, b, b - a);
    } else{
        printf("%c와 %c 사이의 거리 : %d\n", a, b, a - b);
    }
    
    return 0;
}