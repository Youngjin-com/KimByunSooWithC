#include <stdio.h>

typedef enum{
    SPRING = 10,
    SUMMER = 20,
    AUTUMN = 30,
    WINTER = 40
} Season;

void printCurrentSeason(Season currentSeason){
    switch (currentSeason){
        case SPRING:
            printf("Spring\n");
            break;
        case SUMMER:
            printf("Summer\n");
            break;
        case AUTUMN:
            printf("Autumn\n");
            break;
        case WINTER:
            printf("Winter\n");
            break;
        default:
            printf("정의되지 않은 계절을 잘못 입력하셨습니다.\n");
            break;
    }
}

int main(){
    Season currentSeason;
    currentSeason = WINTER;
    printCurrentSeason(currentSeason);

    currentSeason = SPRING;
    printCurrentSeason(currentSeason);

    return 0;
}
