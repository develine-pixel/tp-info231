#include <stdio.h>

int main(){
    int i, n, position, valeur;
    int trouve = 0;
    

    printf("Entrer la taille du tableau :");
    scanf("%d",&n);

    int tab[n];

    for(i=0; i<n; i++){
        printf("Element %d : ",i+1);
        scanf("%d",&tab[i]);
    }
    printf("Entrer la valeur a trouver : ");
    scanf("%d",&valeur);

    for(i=0; i<n; i++){
        if (tab[i] == valeur){
            trouve = 1;
            position = i+1;
            break;
        }
        
    }
    if(trouve){
        printf("La valeur est a la position %d", position);
    }else{
        printf("La valeur est introuvable");
    }    
    return 0;
}
