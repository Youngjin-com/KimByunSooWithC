#include <stdio.h>
int main() {
    long long number = 1234567891011; // 정수형 변수에 숫자 저장

    char string_array[ ] = "안녕하세요"; // 문자열을 배열에 저장

    // 정수와 문자열을 줄 단위로 출력
    printf("%lld\n", number);
    printf("%s\n", string_array);
    
    return 0;
}