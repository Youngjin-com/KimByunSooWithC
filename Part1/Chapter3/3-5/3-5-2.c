#include <stdio.h>

int main(){
    int x = 10;
    int y = 3;
    float result;

    result = x / y;
    printf("올바르지 않은 결과 : %f\n", result);
    result = (float)x / y;
    printf("올바른 결과 : %f\n", result);

    return 0;
}