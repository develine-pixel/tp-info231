#include <stdio.h>

int main() {
    int n;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int T[n];

    printf("Entrez les %d éléments du tableau :\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }

    int trie = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (T[i] > T[i + 1]) {
            trie = 0;  // Trouvé une erreur : pas trié
            break;
        }
    }

    if (trie)
        printf("Le tableau est trié en ordre croissant.\n");
    else
        printf("Le tableau n'est pas trié.\n");

    return 0;
}
