#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    int tabInt[10];
    float tabFloat[10];

    for (int i = 0; i < 10; i++) {
        tabInt[i] = rand() % 100;
        tabFloat[i] = (float)(rand() % 100) / 10.0f;
    }

    printf("Tableau int avant : ");
    for (int *p = tabInt; p < tabInt + 10; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    printf("Tableau float avant : ");
    for (float *p = tabFloat; p < tabFloat + 10; p++) {
        printf("%.2f ", *p);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            tabInt[i] *= 3;
            tabFloat[i] *= 3.0f;
        }
    }

    printf("Tableau int apres : ");
    for (int *p = tabInt; p < tabInt + 10; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    printf("Tableau float apres : ");
    for (float *p = tabFloat; p < tabFloat + 10; p++) {
        printf("%.2f ", *p);
    }
    printf("\n");

    return 0;
}
