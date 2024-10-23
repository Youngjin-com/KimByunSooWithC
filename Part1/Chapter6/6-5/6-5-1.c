#include <stdio.h>

int main(){
    printf("1부터 5중에서 하나의 숫자를 입력하세요.\n");
    int input;

    scanf("%d", &input);

    switch(input){
        case(1):
            printf("1을 입력했습니다.\n");
            break;
        case(2):
            printf("2를 입력했습니다.\n");
            break;
        case(3):
            printf("3을 입력했습니다.\n");
            break;
        case(4):
            printf("4를 입력했습니다.\n");
            break;
        case(5):
            printf("5를 입력했습니다.\n");
            break;
        default:
            printf("1부터 5까지의 숫자를 입력하세요.\n");
    }

    return 0;
}