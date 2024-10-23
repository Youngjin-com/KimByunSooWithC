#include <stdio.h>

typedef enum{
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
} Day;

void printToday(Day yesterday){
    switch (yesterday){
        case SUNDAY:
            printf("MONDAY\n");
            break;
        case MONDAY:
            printf("TUESDAY\n");
            break;
        case TUESDAY:
            printf("WEDNESDAY\n");
            break;
        case WEDNESDAY:
            printf("THURSDAY\n");
            break;
        case THURSDAY:
            printf("FRIDAY\n");
            break;
        case FRIDAY:
            printf("SATURDAY\n");
            break;
        case SATURDAY:
            printf("SUNDAY\n");
            break;
        default:
            printf("정의되지 않은 요일을 잘못 입력하셨습니다.\n");
            break;
    }
}

int main(){
    Day yesterday = WEDNESDAY;
    printf("오늘의 요일은 ?\n");
    printToday(yesterday);

    return 0;
}
