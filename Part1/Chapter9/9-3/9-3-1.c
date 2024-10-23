#include <stdio.h>

int main(){
    int var;
    int *ptr;
    ptr = &var;

    printf("%p\n", ptr);
    printf("%p\n", &var);

    return 0;
}