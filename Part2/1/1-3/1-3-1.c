#include <stdio.h>
int main() {
    double sum=0.0;
    double score[4];

    printf("점수를 입력하세요 : ");

    for(int i=0; i<4; i++){
        scanf("%lf", &score[i]);
    }

    for(int i=0; i<4; i++){
        sum += score[i];
    }

    printf("평균점수 : %.1lf\n", sum/4);
    
    return 0;
}