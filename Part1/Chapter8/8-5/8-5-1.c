#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 5;
    int *array=(int*)malloc(sizeof(int)*size);

    for (int i = 0; i < size; i++)
        printf("array[%d]의 결과: %d\n", i, array[i]);
 
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < size; i++)
        printf("array[%d]의 결과: %d\n", i, array[i]);
    
    free(array);

    return 0;
}