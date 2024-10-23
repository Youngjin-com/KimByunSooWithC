#include <stdio.h>

int main(){
    char name1[10] = "김변수";
    char name2[10] = "이매개";
    char name3[10] = "박함수";
    int age1 = 20;
    int age2 = 21;
    int age3 = 19;

    printf("첫 번째 사람 이름 : %s, 나이 : %d\n", name1, age1);
    printf("두 번째 사람 이름 : %s, 나이 : %d\n", name2, age2);
    printf("세 번째 사람 이름 : %s, 나이 : %d", name3, age3);

    return 0;
}