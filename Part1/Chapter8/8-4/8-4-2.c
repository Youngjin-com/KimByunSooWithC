#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "문자열이 긴 경우에는 memcpy를 사용해서 문자열 자체를 한 번에 복사합니다";
    char str2[100];

    memcpy(str2, str1, sizeof(str1));
    printf("%s\n", str2);

    return 0;
}