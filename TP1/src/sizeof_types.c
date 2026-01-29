#include <stdio.h>

int main() {
    // Entiers (Signés et Non-signés)
    printf("char: %zu | unsigned char: %zu\n", sizeof(char), sizeof(unsigned char));
    printf("short: %zu | unsigned short: %zu\n", sizeof(short), sizeof(unsigned short));
    printf("int: %zu | unsigned int: %zu\n", sizeof(int), sizeof(unsigned int));
    printf("long: %zu | unsigned long: %zu\n", sizeof(long), sizeof(unsigned long));
    printf("long long: %zu | unsigned long long: %zu\n", sizeof(long long), sizeof(unsigned long long));

    // Nombres à virgule
    printf("float: %zu\n", sizeof(float));
    printf("double: %zu\n", sizeof(double));
    printf("long double: %zu\n", sizeof(long double));

    return 0;
}

