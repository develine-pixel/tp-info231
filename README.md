# tp-info231
# tp-info231
#programation en c:Opérations sur matrices et tableaux
Ce TP contient plusieurs programmes en langage C qui effectuent différentes opérations sur des matrices et des tableaux, telles que la somme, le produit, la recherche, et des manipulations diverses.

## Organisation des fichiers  
- `somme_matrices.c` : somme de deux matrices  
- `produit_matrices.c` : produit de deux matrices  
- `recherche_sequentielle.c` : recherche d’un élément dans un tableau  
- `multiplication_plus_un.c` : multiplication de deux entiers positifs en utilisant uniquement l’addition de +1  
- `test_trie.c` : vérification si un tableau est trié  
- `mediane.c` : calcul de la médiane dans un tableau  
- `inverser_tableau.c` : inversion d’un tableau  
- `produit_vectoriel.c` : produit vectoriel de deux vecteurs  
- `produit_vecteur_matrice.c` : produit d’un vecteur par une matrice
## Compilation  
Pour compiler un programme, utiliser la commande :  
 gcc nom_du_programme.c -o nom_du_programme
## Exécution
Pour executer le programme ,utiliser la commande :
./nom_du_programme
## Détail des programmes
1. somme_matrices.c

But : Calculer la somme de deux matrices de même taille.

Algorithme :

Lire les dimensions n et m

Remplir les deux matrices

Additionner chaque élément correspondant

Afficher le résultat
2. Produit de matrices

- Objectif : Calculer le produit de deux matrices A (m × p) et B (p × n).  
- Entrées : Dimensions m, p, n, puis éléments de A et B.  
- Sortie : Matrice produit C (m × n).  
- Points clés : Boucles triplement imbriquées, respect des règles de dimension pour la multiplication.
  3. Recherche séquentielle dans un tableau

- Objectif : Rechercher un élément donné dans un tableau par parcours séquentiel (de début à fin).  
- Entrées :Taille du tableau, éléments, puis la valeur recherchée.  
- Sortie :Position de la première occurrence ou indication que l’élément n’est pas trouvé.  
- Points clés : Parcours linéaire, condition de sortie anticipée.
  4. Calcul de a × b avec uniquement des additions de 1

- Objectif : Multiplier deux entiers positifs sans utiliser l’opérateur `*`, mais uniquement des additions unitaires (`+1`).  
- Entrées : Deux entiers positifs `a` et `b`.  
- Sortie :Produit calculé.  
- Points clés : Boucles imbriquées ou simple boucle avec addition répétée, compréhension
  5. Tester si un tableau est trié

- Objectif : Vérifier si un tableau d’entiers est trié en ordre croissant.  
- Entrées :Taille, éléments du tableau.  
- Sortie : Indication « trié » ou « non trié ».  
- Points clés : Parcours du tableau, comparaison élément à élément, arrêt anticipé.
  6. Calcul de la médiane dans un tableau

- Objectif : Calculer la médiane d’un tableau d’entiers (supposé trié).  
- Entrées : Taille, éléments (triés).  
- Sortie :Valeur médiane.  
- Points clés : Gestion des cas paire et impaire, accès direct aux indices centraux
  7. Inverser un tableau

- Objectif : Écrire un programme qui inverse l’ordre des éléments d’un tableau.  
- Entrées : Taille, éléments du tableau.  
- Sortie :Tableau inversé.  
- Points clés :Échanges symétriques, utilisation de variable temporaire.
  8. Produit vectoriel

- Objectif : Calculer le produit vectoriel de deux vecteurs en dimension 3.  
- Entrées : Les deux vecteurs de taille 3.  
- Sortie :Le vecteur résultant.  
- Points clés : Compréhension de la formule du produit vectoriel, calcul des composantes.
   9. Produit vecteur-matrice

- Objectif : Calculer le produit d’un vecteur ligne par une matrice.  
- Entrées :Taille du vecteur, dimensions de la matrice, éléments du vecteur et de la matrice.  
- Sortie :Vecteur résultat.  
- Points clés :Manipulation des dimensions, boucles imbriquées.
         Langage :Tous les programmes doivent être écrits en langage C.  
         Saisie utilisateur : Les tailles et éléments des tableaux/matrices sont toujours demandés à l’utilisateur.  
         Affichage :Le résultat doit être clairement affiché.  
         Validation des entrées :Chaque programme devra vérifier la validité des entrées (par exemple, tailles positives).  
         Code clair et commenté :Le code doit être lisible et comporter des commentaires expliquant les parties importantes.  
         Test :Tester chaque programme avec plusieurs cas, y compris des cas limites (ex : tableau vide, valeurs égales, etc.).










 
 
     
   


