#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void) {
    float rayon = 6.0f;

    float aire = M_PI * rayon * rayon;
    float perimetre = 2.0f * M_PI * rayon;

    printf("Pour un rayon de %.2f :\n", rayon);
    printf("L'aire du cercle = %.2f\n", aire);
    printf("Le périmètre du cercle = %.2f\n", perimetre);

    return 0;
}
