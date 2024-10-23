#include <stdio.h>

int main(){
    int array[5] = {100};

    for(int i = 0; i < 5; i++){
        printf("array[%d]의 값은?  %d\n", i, array[i]);
    }
    
    return 0;
}