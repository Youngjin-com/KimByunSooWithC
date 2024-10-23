#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "fghij";
    char str2[100] = "abcde";

    strcat(str2, str1);
    printf("연결된 문자열: %s\n", str2);

    return 0;
}