#include <stdio.h>

int main(){
    int array[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };

    for(int i = 0; i < 5; i++){
        printf("array[0][%d]의 값: %d\n", i, array[0][i]);
    }
    
    for(int i = 1; i < 5; i++){
        printf("array[1][%d]의 값: %d\n", i, array[1][i]);
    }

    return 0;
}