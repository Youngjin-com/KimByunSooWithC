#include <stdio.h>

void sayHello(int n);

int main(){
    sayHello(5);

    return 0;
}

void sayHello(int n){
    if(n == 0){
        return;
    }
    
    printf("안녕하세요!\n");
    sayHello(n - 1);
}