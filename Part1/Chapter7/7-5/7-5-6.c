#include <stdio.h>

int main(){
    int i = 0;

    while (i < 5){
        for(int j = 100; j > 95; j--){
            break;
            printf("%d\n", j);
        }
        i++;
        printf("%d\n", i);
    }

    return 0;
}
