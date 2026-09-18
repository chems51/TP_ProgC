#include <stdio.h>

int main(void) {
    signed char c = 'A';
    unsigned char uc = 200;

    short s = -150;
    unsigned short us = 30000;

    int i = -123456;
    unsigned int ui = 123456u;

    long int li = -123456789L;
    unsigned long int uli = 1234567890UL;

    long long int lli = -9876543210LL;
    unsigned long long int ulli = 9876543210ULL;

    float f = 12.5f;
    double d = 123.456;
    long double ld = 987.654321L;

    printf("char = %d\n", c);
    printf("unsigned char = %u\n", uc);
    printf("short = %hd\n", s);
    printf("unsigned short = %hu\n", us);
    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);
    printf("long int = %ld\n", li);
    printf("unsigned long int = %lu\n", uli);
    printf("long long int = %lld\n", lli);
    printf("unsigned long long int = %llu\n", ulli);
    printf("float = %f\n", f);
    printf("double = %f\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
