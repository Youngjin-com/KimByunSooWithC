#include <stdio.h>

int main(){
    int var = 111;
    int *ptr;
    ptr = &var;
 
    printf("포인터의 역참조 값: %d\n", *ptr);

    *ptr = 222;

    printf("변경된 역참조 값: %d\n", *ptr);
    printf("변경된 var의 값: %d", var);

    return 0;
}