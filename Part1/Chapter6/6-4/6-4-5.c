#include <stdio.h>

int main() {
    int month;

    printf("1~12까지의 숫자 중 계절을 알고 싶은 달을 입력하세요:  ");
    scanf("%d", &month);

    switch (month) {
        case 1:
        case 2:
        case 12:
            printf("겨울\n");
            break;
        case 3:
        case 4:
        case 5:
            printf("봄\n");
            break;
        case 6:
        case 7:
        case 8:
            printf("여름\n");
            break;
        case 9:
        case 10:
        case 11:
            printf("가을\n");
            break;
        default:
            printf("없는 계절을 입력하셨습니다.\n");
    }

    return 0;
}
