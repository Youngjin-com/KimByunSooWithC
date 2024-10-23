#include <stdio.h>

int main(){
    int a = 10;
    int *ptr1;
    int *ptr2;

    ptr1 = &a;
    ptr2 = ptr1;

    printf("%d", *ptr1);

    return 0;
}