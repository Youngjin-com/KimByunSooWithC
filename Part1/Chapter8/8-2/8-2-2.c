#include <stdio.h>

int main(){
    int n = 5;
    int array[n];

    for(int i = 0; i < n; i++){
        array[i] = (i + 1)*10;
        printf("%d ", array[i]);
    }
    
    return 0;
}