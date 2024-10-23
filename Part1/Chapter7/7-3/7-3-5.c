#include <stdio.h>

int main() {
    int i;
    printf("%d\n", i);

    while(i == 3){
        printf("오잉? 이건 왜 실행이 안될까?");
        i++;
    }
    printf("코드가 종료되었습니다.");
 
    return 0;
}