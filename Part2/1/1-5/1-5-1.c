#include <stdio.h>
int main() {
    int x, y, z;
    printf("가로 세로 높이를 입력하세요(3 3 3) : ");
    scanf("%d %d %d", &x, &y, &z);
    
    
    int result = 0;
    result+= x * 4 - 8;
    result+= y * 4 - 8;
    result+= z * 4 - 8;
    printf("두 개의 면만 칠해진 블록은 총 %d개 입니다.\n", result);
    
    
    return 0;
}