#include <stdio.h>

int sum(int x, int y);

int main(){
    printf("두 값의 합은 : %d입니다. ", sum(99, 1));

    return 0;
}

int sum(int x, int y){
    return x + y;
}