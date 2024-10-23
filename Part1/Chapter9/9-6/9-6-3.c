#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("%d\n", *ptr); 
    printf("%d\n", *(ptr + 1)); 
    printf("%d\n", *(ptr + 2)); 

    printf("%p\n", ptr); 
    printf("%p\n", (ptr + 1)); 
    printf("%p\n", (ptr + 2)); 
    
    return 0;
}

