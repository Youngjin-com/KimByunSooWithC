#include <stdio.h>
int main() {
    // 과자 개수를 입력받습니다.
    int cookie_count;
    printf("과자 개수 : ");
    scanf("%d", &cookie_count);

    // 반성문을 출력합니다.
    for(int i = 0; i < cookie_count * 3; i++) {
        printf("과자는 맛있지만 수업시간엔 먹으면 안돼요\n");
    }
    
    return 0;
}