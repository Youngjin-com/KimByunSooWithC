#include <stdio.h>

int main(){
    int password = 5050;
    int input;
    
    while (1){
        printf("비밀번호를 대라! 모르겠다면 0을 입력해라! : ");
        scanf("%d", &input);
        if(input == password){
            printf("정답이다!");
            break;
        }
        if(input == 0){
            printf("다시 한 번 알아와!");
            break;
        }
        printf("에잇! 비밀번호가 틀렸잖아!\n");
    }

    return 0;
}
