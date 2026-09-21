#include <stdio.h>

int main() {
    printf("=== Data Type Sizes on This System ===\n\n");
    
    printf("char: %zu bytes\n", sizeof(char));
    printf("int: %zu bytes\n", sizeof(int));
    printf("unsigned int: %zu bytes\n", sizeof(unsigned int));
    printf("short: %zu bytes\n", sizeof(short));
    printf("long: %zu bytes\n", sizeof(long));
    printf("long long: %zu bytes\n", sizeof(long long));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("pointer: %zu bytes\n", sizeof(int*));

    return 0;
}
