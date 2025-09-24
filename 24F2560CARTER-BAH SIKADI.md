#include <stdio.h>
#include <stdlib.h>

void trier(int tab[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

void afficherTableau(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

float mediane(int tab[], int n) {
    trier(tab, n);

    if (n % 2 == 1) {
        return tab[n / 2];
    } else {
        return (tab[(n - 1) / 2] + tab[n / 2]) / 2.0;
    }
}

int main() {
    int n;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int *tab = (int *)malloc(n * sizeof(int));
    if (tab == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        printf("Élément %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("\nTableau initial : ");
    afficherTableau(tab, n);

    float med = mediane(tab, n);

    printf("Tableau trié   : ");
    afficherTableau(tab, n);

    printf("La médiane est : %.2f\n", med);

    free(tab);
    return 0;
}
