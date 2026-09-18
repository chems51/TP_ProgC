#include <stdio.h>

int main(void) {
    int somme = 0;

    for (int n = 1; n <= 1000; n++) {
        if (n % 11 == 0) {
            continue;
        }

        if (n % 5 == 0 || n % 7 == 0) {
            somme += n;
        }

        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale : %d\n", somme);
    return 0;
}
