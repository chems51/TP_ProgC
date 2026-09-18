#include <stdio.h>
#include <math.h> // Remplacement de string.h par math.h pour utiliser M_PI

int main() {
    float rayon = 6.0; // Utilisation d'un float comme demandé
    
    // Calcul de l'aire (pi * r^2)
    float aire = M_PI * rayon * rayon;
    
    // Calcul du périmètre (2 * pi * r)
    float perimetre = 2 * M_PI * rayon;

    // Affichage des résultats
    printf("Pour un rayon de %.2f :\n", rayon);
    printf("L'aire du cercle = %f\n", aire);
    printf("Le périmètre du cercle = %f\n", perimetre);

    return 0;
}