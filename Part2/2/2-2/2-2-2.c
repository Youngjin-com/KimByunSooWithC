#include <stdio.h>

int sosu(int a) {
    int sum = 0;
    for(int i = 1; i < a + 1; i++){
        if(a % i == 0){
            sum = sum + 1;
        }
    }

    if(sum== 2){
        return 1;
    } else{
        return 0;
    }
}

int main() {
    int a, b;
    printf("두 숫자 : ");
    scanf("%d %d", &a, &b);

    for(int i = a; i < b; i++){
        if(sosu(i) == 1){
            printf("%d ", i);
        }
    }
    
    return 0;
}