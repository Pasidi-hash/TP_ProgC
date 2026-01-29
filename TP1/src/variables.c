#include <stdio.h>

int main() {
    // 1. Caractères
    char c = 'A';
    unsigned char uc = 255;
    printf("char: %c | unsigned char: %u\n", c, uc);

    // 2. Entiers courts
    short s = -10;
    unsigned short us = 10;
    printf("short: %d | unsigned short: %u\n", s, us);

    // 3. Entiers standards
    int i = -100;
    unsigned int ui = 100;
    printf("int: %d | unsigned int: %u\n", i, ui);

    // 4. Entiers longs
    long l = -1000;
    unsigned long ul = 1000;
    printf("long: %ld | unsigned long: %lu\n", l, ul);

    // 5. Entiers très longs
    long long ll = -10000;
    unsigned long long ull = 10000;
    printf("long long: %lld | unsigned long long: %llu\n", ll, ull);

    // 6. Nombres à virgule
    float f = 3.14f;
    double d = 3.14159;
    long double ld = 3.1415926535L;
    printf("float: %.2f | double: %.5f | long double: %.10Lf\n", f, d, ld);

    return 0;
}
