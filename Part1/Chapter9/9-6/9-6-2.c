#include <stdio.h>

int main(){
    int arr[]= {1, 2, 3, 4, 5}; 

    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    
    return 0;
}