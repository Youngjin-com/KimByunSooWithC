#include <stdio.h>
#include <string.h>

int main(){
    char str1[100] = "초코 와플";
    char str2[100] = "바나나 와플";
    char str3[100] = "초코 와플";

    int result1 = strcmp(str1, str2);
    int result2 = strcmp(str1, str3);

    printf("%s과 %s의 비교 결과: %d\n", str1, str2, result1);
    printf("%s과 %s의 비교 결과: %d\n", str1, str3, result2);

    return 0;
}