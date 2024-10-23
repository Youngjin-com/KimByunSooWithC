#include <stdio.h>

int main(){
    int score;

    scanf("%d", &score);

    if(score >= 90){
        printf("A등급\n");
    } else if(score >= 70){
        printf("B등급\n");
    } else if(score >= 50){
        printf("C등급\n");
    } else if(score >= 30){
        printf("D등급\n");
    } else{
        printf("F등급\n");
    }
        
    return 0;
}