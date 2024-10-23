#include <stdio.h>

int main(){
    char array[5] = {'a'};
    
    for(int i = 0; i < 5; i++){
        printf("array[%d]의 값은?  %c\n", i, array[i]);
    }
    
    return 0;
}