#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "문자열 복사";
    char str2[100];

    strcpy(str2, str1);
    printf("%s\n", str2);

    return 0;
}