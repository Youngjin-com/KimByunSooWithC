#include <stdio.h>

int main(){
    int x,y,z;

    printf("가로 세로 높이를 입력하세요(3 3 3) :");
    scanf("%d %d %d", &x, &y, &z);

    int oneZ = 2*(x+y) - 8; 

    if(oneZ < 0){
        printf("두 개의 면만 칠해진 볼록은 총 0개 입니다.\n");
        return 0;
    }
    int total = z*(oneZ);

    printf("두 개의 면만 칠해진 블록은 총 %d개 입니다.\n", total);
    return 0;
}