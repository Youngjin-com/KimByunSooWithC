#include <stdio.h>

int main(){
    int age = 15;
    
    printf("김변수씨는 65세 이상이거나 19세 미만이다. %d\n", age >= 65 || age < 19);

    return 0;
}