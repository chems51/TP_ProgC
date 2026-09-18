#include <stdio.h>

int main(void) {
    int n = 7;
    int a = 0;
    int b = 1;

    printf("Suite de Fibonacci jusqu'a U%d : ", n);

    for (int i = 0; i <= n; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", a);

        int next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
