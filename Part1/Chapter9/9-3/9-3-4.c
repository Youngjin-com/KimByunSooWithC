#include <stdio.h>

int main(){
    int a = 111;
    int *ptr = &a;
 
    printf("a의 메모리 주솟값: %p\n", &a);
    printf("ptr가 가리키는 값: %p", &ptr);

    return 0;
}