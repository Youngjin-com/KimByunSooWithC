#include <stdio.h>

void sayHello();

int main(){
    sayHello();
    
    return 0;
}

void sayHello(){
    printf("안녕하세요!\n"); 
    sayHello();
}