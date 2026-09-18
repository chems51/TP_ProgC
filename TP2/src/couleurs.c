#include <stdio.h>

struct Couleur {
    unsigned char rouge;
    unsigned char vert;
    unsigned char bleu;
    unsigned char alpha;
};

int main(void) {
    struct Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x44, 0xc8, 0x64, 0xff},
        {0x10, 0x20, 0x30, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0x12, 0x34, 0x56, 0xff},
        {0xab, 0xcd, 0xef, 0xff},
        {0x99, 0x88, 0x77, 0xff}
    };

    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %u\n", couleurs[i].rouge);
        printf("Vert : %u\n", couleurs[i].vert);
        printf("Bleu : %u\n", couleurs[i].bleu);
        printf("Alpha : %u\n\n", couleurs[i].alpha);
    }

    return 0;
}
