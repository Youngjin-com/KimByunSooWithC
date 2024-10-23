#include <stdio.h>

int main() {
    int n = 4;
    int array1[n];
    int array2[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i - 1; j++){
            if(i % 2== 0){
                if(j== 0|| j== i){
                    array1[j] = 1;
                } else{
                    array1[j] = array2[j-1] + array2[j];
                }
                printf("%d", array1[j]);
            }
            else{
                if(j== 0|| j== i){
                    array2[j] = 1;
                } else{
                    array2[j] = array1[j-1] + array1[j];
                }
                printf("%d", array2[j]);
            }
        }
        printf("\n");
    }
    return 0;
}