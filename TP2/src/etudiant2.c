#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[20];
    char prenom[20];
    char adresse[50];
    float noteC;
    float noteSE;
};

int main(void) {
    struct Etudiant etudiants[5] = {
        {"Dupont", "Marie", "20, Boulevard Niels Bohr, Lyon", 16.5f, 12.1f},
        {"Martin", "Pierre", "22, Boulevard Niels Bohr, Lyon", 14.0f, 14.1f},
        {"Bernard", "Julie", "24, Rue des Fleurs, Paris", 15.2f, 13.8f},
        {"Petit", "Luc", "30, Avenue de la Republique, Marseille", 17.0f, 15.5f},
        {"Leroy", "Sophie", "18, Rue du Soleil, Lille", 13.7f, 16.2f}
    };

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].noteC);
        printf("Note 2 : %.1f\n\n", etudiants[i].noteSE);
    }

    return 0;
}
