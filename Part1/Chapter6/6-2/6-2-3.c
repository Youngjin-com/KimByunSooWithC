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
    
    if(70 > score){
        printf("C등급\n");
    }
        
    return 0;
}