#include <stdio.h>

int main(){
    float weight = 49.5;
    float height = 168;

    printf("키가 165cm 이상이고 몸무게가 50kg 미만이라면 '마름'을 출력합니다.\n");

    if(weight < 50 && height >= 165){
        printf("마름\n");
    }   
        
    return 0;
}