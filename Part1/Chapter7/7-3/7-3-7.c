#include <stdio.h>

int main(){
    int i = 1;

    while(i < 10){
        printf("3 * %d = %d", i, i * 3);
        i++;
    }
 
    return 0;
}