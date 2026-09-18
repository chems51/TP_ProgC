#include <stdio.h>

int main(void) {
    char c = 'A';
    short s = 12;
    int i = 42;
    long int li = 123456L;
    long long int lli = 987654321LL;
    float f = 3.5f;
    double d = 10.25;
    long double ld = 20.5L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n");
    printf("c = %d, adresse = %p\n", *pc, (void *)pc);
    printf("s = %hd, adresse = %p\n", *ps, (void *)ps);
    printf("i = %d, adresse = %p\n", *pi, (void *)pi);
    printf("li = %ld, adresse = %p\n", *pli, (void *)pli);
    printf("lli = %lld, adresse = %p\n", *plli, (void *)plli);
    printf("f = %f, adresse = %p\n", *pf, (void *)pf);
    printf("d = %f, adresse = %p\n", *pd, (void *)pd);
    printf("ld = %Lf, adresse = %p\n\n", *pld, (void *)pld);

    *pc = 'Z';
    *ps = 99;
    *pi = 100;
    *pli = 654321L;
    *plli = 123456789LL;
    *pf = 7.5f;
    *pd = 15.5;
    *pld = 30.5L;

    printf("Apres la manipulation :\n");
    printf("c = %d, adresse = %p\n", *pc, (void *)pc);
    printf("s = %hd, adresse = %p\n", *ps, (void *)ps);
    printf("i = %d, adresse = %p\n", *pi, (void *)pi);
    printf("li = %ld, adresse = %p\n", *pli, (void *)pli);
    printf("lli = %lld, adresse = %p\n", *plli, (void *)plli);
    printf("f = %f, adresse = %p\n", *pf, (void *)pf);
    printf("d = %f, adresse = %p\n", *pd, (void *)pd);
    printf("ld = %Lf, adresse = %p\n", *pld, (void *)pld);

    return 0;
}
