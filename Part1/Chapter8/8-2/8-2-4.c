#include <stdio.h>

int main(){
    int array[2][5];

    int num = 1;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            array[i][j] = num++;
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 5; j++){
            printf("array[%d][%d] 의 값: %d\n", i, j, array[i][j]);
        }
    }
    return 0;
}