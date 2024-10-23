#include <stdio.h>

int main(){
    int birth, after;

    scanf("%d %d", &birth, &after);
    
    int age = after - birth;

    printf("%d년에 나는 %d 살이야!\n",after,age);
    return 0;
}