#include<stdio.h>

int inverse_tab(int tab[], int n){
	int i = 0, j = n-1, cour;
while (i < j){
	tab[i] = cour;
	tab[i] = tab[j];
	tab[j] = cour;

	i++;
	j--;
}
}

int main(){
   int n, i;

   printf("Combien d'element voulez-vous entrer dans le tableau:  \n");
   scanf("%d", &n);

   int tab[n];

   for(i =0; i < n; i++){
   printf("Entrer les valeurs %d: ", i+1);
   scanf("%d", &tab[i]);
   }
   	
   printf("\n ****Presentation du contenu du tableau**** \n");
   	for(i = 0; i < n; i++){
   		printf("tab[%d] = %d\n", i, tab[i]);
   		
   		}

   	printf("\n ***Presentation du tableau inverse\n");
   	
   	for(i = n - 1; i >= 0; i--){
   		printf("tab[%d] = %d\n", i, tab[i]);
   	}

    return 0;

   }

