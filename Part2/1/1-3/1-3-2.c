#include <stdio.h>
int main() {
    double sum=0.0;
    double score;
    printf("점수를 입력하세요:");
    
    for(int i = 0; i < 4; i++){
        scanf("%lf", &score);
        sum += score;
    }
    
    printf("\n평균점수: %.1lf\n", sum/4);
    
    return 0;
}