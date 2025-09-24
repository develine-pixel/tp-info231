#include<stdio.h>
 int main(){
	int m,n,p;
	printf("entrez le nombre de ligne de la matrice A(m):");
	scanf("%d",&m);
	printf("entrez le nombre de colonne de la matrice A(p):");
	scanf("%d",&p);
		printf("entrez le nombre de colonne de la matrice B(n):");
           scanf("%d",&n);
		int A[m][p];
		int B[p][n];
		int C[m][n];
		printf("entrer les elements de la matrice A(%d x %d):\n", m, p);
		for (int i =0 ; i < m; i++){
			for(int j=0; j<p;j++){
          scanf("%d",&A[m][p]);
			}
	
		}
		printf("entrer les elements de la matrice B(%d x %d):\n", p, n);
		for (int i =0 ; i < p; i++){
			for(int j=0; j<n;j++){
          scanf("%d",&B[p][n]);
		   for (int i = 0; i < m; i++) {
			for (int j= 0; j< n; i++){
				 C[i][j]=0;
			}
			 }
		   for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        for(int k = 0; k < p; k++) {
            C[i][j] += A[i][k] * B[k][j];
        }
    }
}
printf("Matrice C (produit A*B):\n");
for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        printf("%d ", C[i][j]);
    }
    printf("\n");
}

		  

		  

		

 
