#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    if(n % 2 == 0){
        printf("짝!");
    } else{
        printf("홀!");
    }

    return 0;
}