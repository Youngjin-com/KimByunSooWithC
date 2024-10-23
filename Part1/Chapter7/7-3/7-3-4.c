#include <stdio.h>

int main(){
    int i = 0;

    while(i < 3) {
        i = 1;
        printf("무한 루프다! Ctrl + C 키를 눌러서 종료해!\n");
        i++;
    }
 
    return 0;
}