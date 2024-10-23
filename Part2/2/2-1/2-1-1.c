#include <stdio.h>

int main(){

    int start, end;
    int n;

    printf("두 숫자 : ");
    scanf("%d %d", &start, &end);

    printf("N : ");
    scanf("%d", &n);

    int first = (start/n)*n + n;

    for(int i = first; i<end; i = i+n){
        printf("%d ", i);
    }
    
    return 0;
}