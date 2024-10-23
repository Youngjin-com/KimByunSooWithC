#include <stdio.h>

int main(){
    int money = 5000;
    int jeonjuGimbap = 1000;
    int tunaGimbap = 700;

    money = money - (jeonjuGimbap + tunaGimbap);
    printf("남은 금액은 %d원 입니다\n", money);
    
    return 0;
}