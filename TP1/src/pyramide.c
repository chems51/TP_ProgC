#include <stdio.h>

int main(void) {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        for (int k = 1; k <= i; k++) {
            printf("%d", k);
        }

        for (int k = i - 1; k >= 1; k--) {
            printf("%d", k);
        }

        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");
    return 0;
}

