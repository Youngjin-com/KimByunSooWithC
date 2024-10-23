#include <stdio.h>

int main(){
    int a = 50;
    char b = 'C';
    float c = 30.05;

    printf("int형 변수 a가 저장되어있는 주소 : %p\n ", &a);
    printf("char형 변수 b가 저장되어있는 주소 : %p\n ", &b);
    printf("float형 변수 c가 저장되어있는 주소 : %p\n ", &c);

    return 0;
}