#include <stdio.h>

int main(){
    int start,end;
    printf("두 숫자 : ");
    scanf("%d %d", &start, &end);

    for(int i = start+1; i<end; i++){
        int flag = 0;
    
        for(int j =2; j<i; j++){
            if(i%j == 0){
                flag = 1;
            }
        }
    
        if(flag == 0){
            printf("%d ", i);
        }
    }

    return 0;
}