#include <stdio.h>
#include <string.h>

int main(){
    char str[1000];
    char str2[1000];

    scanf("%s", str);

    while(1){

        scanf("%s", str2);
        if(str[strlen(str)-1] !=  str2[0]){
            printf("게임 오버!\n");
            break;
        }else{
             strcpy(str, str2);
        }
    }

    return 0;
}