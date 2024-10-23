#include <stdio.h>

int main(){
    int num;

    printf("0 또는 1 숫자를 입력하세요: ");
    scanf("%d", &num);

    switch(num){
        case(0):
            printf("0을 입력했습니다.\n");
            break;
        case(1):
            printf("1을 입력했습니다.\n");
            break;
    }

    return 0;
}