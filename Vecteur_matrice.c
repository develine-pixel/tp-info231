#include<stdio.h>
int main(){
    int lignesA, colonnesA;
    printf("Entrer le nombre de lignes de la matrice : ");
    scanf("%d", &lignesA);
    printf("Entrer le nombre de colonnes de la  matrice : ");
    scanf("%d", &colonnesA);
    int M[lignesA][colonnesA],i,j,k,n;

    // remplissage de la matrice
    printf("Remplir la matrice :\n");
    for(i=0; i<lignesA; i++){
        for(j=0; j<colonnesA; j++){
            printf("M[%d][%d] = ", i,j);
            scanf("%d", &M[i][j]);
        }
    }

    printf("Votre vecteur a combien de chiffre? :");
    scanf("%d", &n);
    int V[n], resultat[n];
    printf("Entrer ces valeurs :");
    for(i=0; i<n; i++){
        scanf("%d", &V[i]);
    }
   
    for(i=0; i<n; i++){
        resultat[i]=0;
    }

    for(i=0; i<lignesA; i++){
        for(j=0; j<colonnesA; j++){
            resultat[i] += M[i][j] * V[j];
        }
    }

    printf(" A*v = (%d, %d, %d)\n", resultat[0],resultat[1],resultat[2]);
    return 0;

}