#include <stdio.h>

int main() {
    int i = 1;
    
    while (i <= 10){
        if (i == 2 || i == 5){
            printf("난 오이가 싫어! 2와 5는 제외해!\n");
            i++;
            continue;
        }
        printf("%d\n", i);
        i++;
    }

    return 0;
}
