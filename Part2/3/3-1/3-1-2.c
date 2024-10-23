#include <stdio.h>

int main(){

    int num;
    scanf("%d", &num);

    if(num < 10) {
        num = num * 10;
    }

    int count = 0;
    int origin = num;

    while(1){
        num = (num%10) * 10 + (num%10 + num/10) % 10;
        
        count++;

        if(origin == num){
            printf("%d\n", count);
            break;
        }
    }

    return 0;
}