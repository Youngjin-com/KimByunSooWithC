#include <stdio.h>

int main(){
    int num1 = 4;
    double num2 = 5.0;

    printf(" %d를 2로 나눈 결과 : %d\n", num1, num1 % 2);
    printf(" %lf를 2로 나눈 결과 : %d\n", num2, num2 % 2);

    return 0;
}