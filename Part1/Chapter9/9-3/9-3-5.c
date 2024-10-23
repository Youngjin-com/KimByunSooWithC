#include <stdio.h>

int main(){
    int a = 111;
    float *ptr = &a;
 
    printf("a에 저장된 데이터: %d\n", a);
    printf("ptr가 가리키는 값: %f", *ptr);

    return 0;
}