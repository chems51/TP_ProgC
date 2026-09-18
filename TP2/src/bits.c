#include <stdio.h>

int main(void) {
    int d = (1 << 27) | (1 << 12);
    int bit4 = (d >> 27) & 1;
    int bit20 = (d >> 12) & 1;
    int resultat = bit4 && bit20;

    printf("%d\n", resultat);
    return 0;
}
