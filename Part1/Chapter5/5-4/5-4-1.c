#include <stdio.h>

void funcA();
void funcB();

int main(){
    printf("main함수가 A를 호출합니다.\n");
    funcA();
 
    return 0;
}

void funcA(){
    printf("A가 호출되었습니다!\n");
    printf("A가 B를 호출합니다.\n");
    funcB();
}

void funcB(){
    printf("B가 호출되었습니다!\n");
}