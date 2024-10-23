#include <stdio.h>

int main(){
    int i = 0;
    
    while (i < 5){
        if (i == 2){
            printf("%d는 제외합니다.\n", i);
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}
