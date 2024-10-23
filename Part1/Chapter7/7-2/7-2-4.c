#include <stdio.h>

int main(){
    for(int i = 0; i < 3; i++){
        printf("조건식은 %d < 3으로 참입니다.\n", i);
        printf("조건식의 실행 문장이 실행됩니다!\n");
    }
    printf("조건식의 결과가 거짓으로 반복문이 실행되지 않습니다.");
    
    return 0;
}