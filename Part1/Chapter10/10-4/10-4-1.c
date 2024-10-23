#include <stdio.h>

typedef enum{
    SPRING,
    SUMMER,
    AUTUMN,
    WINTER
}Season;

int main(){
    Season currentSeason = SUMMER;

    switch (currentSeason){
        case SPRING:
            printf("Spring");
            break;
        case SUMMER:
            printf("Summer");
            break;
        case AUTUMN:
            printf("Autumn");
            break;
        case WINTER:
            printf("Winter");
            break;
        default:
            printf("정의되지 않은 계절을 잘못 입력하셨습니다.");
            break;
    }

    return 0;
}
