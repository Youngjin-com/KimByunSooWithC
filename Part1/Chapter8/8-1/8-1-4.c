#include <stdio.h>

int main(){
    int array[5];
    
    for(int i = 0; i < 5; i++){
        array[i] = i + 1;
        printf("array[%d]의 값은?  %d\n", i, array[i]);
    }
    
    return 0;
}