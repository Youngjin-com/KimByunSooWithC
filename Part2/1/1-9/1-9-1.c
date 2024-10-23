#include <stdio.h>
int main() {
    int future, birth;
    scanf("%d %d", &birth, &future);
    printf("%d년에 나는 %d 살이야!", future, future - birth);
    return 0;
}