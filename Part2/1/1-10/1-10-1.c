#include <stdio.h>
int main() {
    int snack;
    
    printf("챙긴 과자의 수를 입력하세요 : ");
    scanf("%d", &snack);

    for(int i = 0; i < snack; i++){
        for(int j = 0; j < 3; j++){
            printf("과자는 맛있지만 수업시간엔 먹으면 안돼요\n");
        }
    }
    
    return 0;
}