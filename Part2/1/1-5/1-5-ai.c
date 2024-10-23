#include <stdio.h>
int main() {
    // 가로, 세로, 높이를 입력받습니다.
    int x, y, z;
    printf("가로 세로 높이를 입력하세요(3 3 3) : ");
    scanf("%d %d %d", &x, &y, &z);


    // 두 개의 면만 칠해진 블록의 개수를 계산합니다.
    int count= (x + y + z - 6) * 4;


    // 가로, 세로, 높이의 크기가 6보다 작은 경우 0을 반환합니다.
    if(count < 0){
        count = 0;
    }

    // 결과를 출력합니다.
    printf("두 개의 면만 칠해진 블록은 총 %d개 입니다.\n", count);
    return 0;
}