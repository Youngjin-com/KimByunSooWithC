#include <stdio.h>

int main(){
    char array[] = "I Love C Programming";

    int len = 0;
    int i = 0;

    while(1){
        len++;
        if(array[i++] == '\0'){
            break;
        }
   }
   printf("array 문자의 길이는: %d\n",len);

   return 0;
}