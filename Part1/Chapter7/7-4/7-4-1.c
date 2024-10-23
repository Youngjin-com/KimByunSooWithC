#include <stdio.h>

int main(){

    for(int i = 2; i < 10; i++){
        printf("%d단: ", i);
        for(int j = 1; j < 10; j++){
            printf(" %d", i * j);
        }
        printf("\n");
    }
 
    return 0;
}