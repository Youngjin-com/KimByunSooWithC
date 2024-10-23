#include <stdio.h>

void printNumber(int x);

int main(){
    printNumber(99);
    printNumber(0);

    return 0;
}

void printNumber(int x) {;
    printf("\n함수의 매개변수는 %d입니다.", x);
}