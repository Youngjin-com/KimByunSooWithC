#include <stdio.h>

int main(){
    int a = 97;
    char b = 'B';

    printf("%c\n", b);

    b = a;

    printf("%c\n", b);
    printf("%d\n", b);
    
    return 0;
}