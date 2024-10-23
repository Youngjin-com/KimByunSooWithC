#include <stdio.h>

int isAlphabet(char x){
    if(x < 65){
        return 0;
    } else if(x > 90 && x < 97){
        return 0;
    } else{
        return 1;
    }
}

int main() {
    char a, b;
    printf("두 개의 알파벳을 입력해주세요 : ");
    scanf("%c %c", &a, &b);
    
    int alphabet = 0;
    alphabet+= isAlphabet(a);
    alphabet+= isAlphabet(b);

    if(alphabet > 0){
        printf("올바르지 않은 문자입니다.");
        return 0;
    }
    if(b > a){
        printf("%c와 %c 사이의 거리 : %d\n", a, b, b - a);
    } else{
        printf("%c와 %c 사이의 거리 : %d\n", a, b, a - b);
    }
    
    return 0;
}