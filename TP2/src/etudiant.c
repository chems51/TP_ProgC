#include <stdio.h>

int main(void) {
    char noms[5][20] = {
        "Dupont", "Martin", "Bernard", "Petit", "Leroy"
    };
    char prenoms[5][20] = {
        "Marie", "Pierre", "Julie", "Luc", "Sophie"
    };
    char adresses[5][50] = {
        "10 rue de Paris", "20 avenue Lyon", "30 rue Marseille", "40 boulevard Lille", "50 avenue Nantes"
    };
    float notesC[5] = {15.5f, 14.0f, 16.0f, 12.5f, 17.0f};
    float notesSE[5] = {13.0f, 15.5f, 14.5f, 11.0f, 16.5f};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note C : %.1f\n", notesC[i]);
        printf("Note SE : %.1f\n\n", notesSE[i]);
    }

    return 0;
}
