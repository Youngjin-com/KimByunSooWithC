#include <stdio.h>

int main(){
    printf("100과 0사이의 숫자에서 특정 숫자의 위치를 파악해봅시다\n");
    int num = 80;
    
    if(num >= 50){
        printf("%d는 절반 이상에 위치합니다.\n", num);
    } else if(num >=0){
        printf("%d는 절반 미만에 위치합니다.\n",num);
    }

    return 0;
}