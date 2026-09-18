#include <stdio.h>

void afficherBinaire(int nombre) {
    if (nombre == 0) {
        printf("0");
        return;
    }

    int bits[32];
    int indice = 0;

    while (nombre > 0) {
        bits[indice] = nombre % 2;
        nombre /= 2;
        indice++;
    }

    for (int i = indice - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}

int main(void) {
    int valeurs[] = {0, 4096, 65536, 65535, 1024};
    int nb = sizeof(valeurs) / sizeof(valeurs[0]);

    for (int i = 0; i < nb; i++) {
        printf("%d -> ", valeurs[i]);
        afficherBinaire(valeurs[i]);
        printf("\n");
    }

    return 0;
}
