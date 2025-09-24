#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, m, n;

    printf("Entrer le nombres de ligne et le nombres de colonnes des matrices: ");
    scanf("%d %d",&m ,&n);

    int A[m][n], B[m][n], C[m][n];

    printf("Entrer les element de la matrice A:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("A[%d][%d] : ", i+1, j+1);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Entrer les elements de la matrice B:\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("B[%d][%d] : ", i+1, j+1);
            scanf("%d", &B[i][j]);
        }
    }
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("La somme des matrices est C =\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("C[%d][%d]: ", i+1, j+1);
            printf("%d\n", C[i][j]);
        }
    }
}
