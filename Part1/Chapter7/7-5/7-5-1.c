#include <stdio.h>

int main(){
    int i = 0;

    while(i < 5) {
        i++;
        printf("%d\n", i);
        if(i == 3) {
            printf("반복을 종료한다!");
            break;
        }
    }

    return 0;
}