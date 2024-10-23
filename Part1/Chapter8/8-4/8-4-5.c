#include <stdio.h>
#include <string.h>

int main(){
    char str[100] = "Happy";

    printf("%s의 저장 공간은 %lu이고 저장된 문자열의 길이는 %lu입니다.\n", str, 
sizeof(str), strlen(str));
    
    return 0;
}