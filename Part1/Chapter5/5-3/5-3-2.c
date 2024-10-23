#include <stdio.h>

void showValue();

int main(){
    int x = 1;

    printf("main함수에 저장된 x 값: %d", x);
    showValue();
    printf("\nmain함수에 저장된 x 값: %d", x);

    return 0;
}

void showValue(){
    int x = 7;
    
    printf("\nshowValue함수 내부에 저장된 x 값: %d", x);
}