#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    char result[2][10] = {"짝!", "홀!"};

    int r = n % 2;

    if(r){
       printf("%s\n", result[r]);
    }else{
        printf("%s\n", result[r]);
    }

    return 0;
}