#include <stdio.h>

int main(){
    int isAllergy;

    printf("갑각류 알러지가 있다면 1, 없다면 0을 입력하세요: ");
    scanf("%d", &isAllergy);

    if(isAllergy == 0){
        printf("갑각류를 먹는다.\n");
    }
        
    return 0;
}