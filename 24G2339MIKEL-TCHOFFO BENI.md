
🔹 Ce programme permet de calculer le produit de deux matrices.
🔹 L’utilisateur saisit d’abord trois dimensions :

n : le nombre de lignes de la matrice A,

m : le nombre de colonnes de A (et lignes de B),

p : le nombre de colonnes de B.


🔹 Trois matrices sont ensuite déclarées :

A de taille n x m,

B de taille m x p,

C de taille n x p pour stocker le résultat.


🔹 L’utilisateur entre les valeurs de A et B, ligne par ligne.
🔹 La matrice C est initialisée avec des zéros.
🔹 Le produit matriciel est calculé en suivant la formule :

C[i][j] = \sum_{k=0}^{m-1} A[i][k] \times B[k][j]

🔹 Cela signifie que chaque élément de C est obtenu en multipliant une ligne de A avec une colonne de B.
🔹 Enfin, le programme affiche la matrice C, ligne par ligne.

💥 Résultat : l’utilisateur obtient le produit des deux matrices saisies.
