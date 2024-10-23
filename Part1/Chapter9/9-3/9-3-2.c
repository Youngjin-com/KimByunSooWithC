#include <stdio.h>

int main(){
    int var = 105;
    int *ptr;
    ptr = &var;

    printf("포인터가 가리키는 주소: %p\n", ptr);
    printf("포인터가 가리키는 주소에 있는 실제 값: %d\n", *ptr);
    printf("변수 var의 메모리 주소: %p\n", &var);
    printf("변수 var의 값: %d", var);

    return 0;
}