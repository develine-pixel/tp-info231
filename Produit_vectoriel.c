#include<stdio.h>
int main(){
    int i;
    int U[3], V[3];
    printf("Entrer le coordonnees du premier vecteur : \n");
    for(i=0; i<3; i++){
        scanf("%d", &U[i]);
    }
    printf("Entrer le coordonnees du deuxieme vecteur : \n");
    for(i=0; i<3; i++){
        scanf("%d", &V[i]);
    }
    int Pv[3];
    Pv[0]=(U[1]*V[2])-(U[2]*V[1]);
    Pv[1]=(U[2]*V[0])-(U[0]*V[2]);
    Pv[2]=(U[0]*V[1])-(U[1]*V[0]);
    printf(" V*V = (%d, %d, %d)\n", Pv[0],Pv[1],Pv[2]);

    return 0;
}