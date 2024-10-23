#include <stdio.h>

typedef union {
    int int_num;
    float float_num;
} DataUnion;

int main() {
    DataUnion data;

    data.int_num = 42;
    printf("int_num의 값 : %d\n", data.int_num);

    data.float_num = 3.14;
    printf("float_num의 값 : %f\n", data.float_num);

    return 0;
}
