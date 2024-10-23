#include <stdio.h>

int main(){
    int total;

    int num;

    scanf("%d", &total);
    scanf("%d", &num);

    int price, count;
    int sum=0;
    for(int i=0; i< num; i++){
        scanf("%d %d", &price, &count);
        sum += price * count;
    }

    if(sum == total){
        printf("잘 계산했어요\n");
    }else{
        printf("잘못 계산됐어요!\n");
    }

    return 0;
}