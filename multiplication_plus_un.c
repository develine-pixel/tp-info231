#include <stdio.h>

int main() {
    int a, b;

    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);

    int produit = 0;

     
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < a; j++) {
            produit += 1;  // On ajoute +1 exactement a*b fois
        }
    }

    printf("Le produit de %d * %d est : %d\n", a, b, produit);

    return 0;
}
