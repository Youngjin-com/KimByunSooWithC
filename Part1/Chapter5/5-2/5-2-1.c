#include <stdio.h>

void printNumber(int x);

int main(){
    printNumber(99);

    return 0;
}

void printNumber(int x) {
    printf("함수의 매개변수는 %d입니다.", x);
}