#include <stdio.h>

void sum(int x, int y);

int main(){
    printf("두 값의 합은 : %d 입니다. ", sum(99, 1));

    return 0;
}

void sum(int x, int y){
    return x + y;
}