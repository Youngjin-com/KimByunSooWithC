#include <stdio.h>

void showValue();
int globalVariable = 10;

int main(){
    printf("main 함수에서 출력한 전역변수 값: %d", globalVariable);
    showValue();

    return 0;
}

void showValue(){
    printf("\nshowValue 함수에서 출력한 전역변수 값: %d", globalVariable);
}