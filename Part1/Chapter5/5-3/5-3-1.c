#include <stdio.h>

int idolByunsoo = 100; // 전역변수

void seoul();
void america();

int main(){
    seoul();
    america();

    return 0;
}

void seoul(){
    int kimByunsoo = 3; // 지역변수
    
    printf("[서울]\n");
    printf("김변수의 값: %d\n", kimByunsoo);
    printf("아이돌 김변수의 값: %d\n", idolByunsoo);
}

void america(){
    int kimByunsoo = 5; // 지역변수
    
    printf("[미국]\n");
    printf("김변수의 값: %d\n", kimByunsoo);
    printf("아이돌 김변수의 값: %d\n", idolByunsoo);
}