#include <stdio.h>

int main(){
    int score;

    scanf("%d", &score);

    if(score >= 90){
        printf("A등급\n");
    }

    if(90 > score && score >= 70){
        printf("B등급\n");
    }

    if(70 > score && score >= 50){
        printf("C등급\n");
    }

    if(50 > score && score >= 30){
        printf("D등급\n");
    }
    
    if(score < 30){
         printf("F등급\n");
    }
        
    return 0;
}