#include <stdio.h>

int main(){
    int a = 111;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    printf("%d", **ptr2);

    return 0;
}