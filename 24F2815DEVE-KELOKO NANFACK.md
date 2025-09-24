Rapport individuel — TP INFO 231
Ce rapport présente le travail réalisé lors du TP consistant à concevoir des pseudocodes pour plusieurs algorithmes classiques en programmation C. L'objectif était d'écrire des descriptions précises et compréhensibles des algorithmes avant leur traduction en langage C, afin de renforcer la compréhension des concepts fondamentaux liés à la manipulation des tableaux, matrices, et opérations arithmétiques.

Travaux réalisés
1. Somme de matrices

Description :
Calculer la somme de deux matrices de même dimension en additionnant chaque élément correspondant.

Pseudocode :
Entrer m, n 
Pour i de 0 à m-1
    Pour j de 0 à n-1
        Saisir A[i][j]
Pour i de 0 à m-1
    Pour j de 0 à n-1
        Saisir B[i][j]

Pour i de 0 à m-1
    Pour j de 0 à n-1
        C[i][j] = A[i][j] + B[i][j]

Afficher matrice C
2. Produit de matrices

Description :
Calculer le produit de deux matrices A (m × p) et B (p × n).

Pseudocode :
Entrer m, p, n
Pour i de 0 à m-1
    Pour j de 0 à p-1
        Saisir A[i][j]
Pour i de 0 à p-1
    Pour j de 0 à n-1
        Saisir B[i][j]

Pour i de 0 à m-1
    Pour j de 0 à n-1
        C[i][j] = 0
        Pour k de 0 à p-1
            C[i][j] = C[i][j] + A[i][k] * B[k][j]

Afficher matrice C
3. Recherche séquentielle dans un tableau

Description :
Trouver la position d’un élément donné dans un tableau en parcourant ses éléments un par un.

Pseudocode :
Entrer n
Pour i de 0 à n-1
    Saisir T[i]

Entrer x // élément à chercher
position = -1
Pour i de 0 à n-1
    Si T[i] == x alors
        position = i
        Sortir de la boucle

Si position == -1 alors
    Afficher "Element non trouvé"
Sinon
    Afficher "Element trouvé à la position", position
4. Calcul de a × b avec uniquement +1

Description :
Multiplier deux entiers positifs sans utiliser l’opérateur *, uniquement des additions de +1.

Pseudocode :
Entrer a, b
produit = 0

Pour i de 1 à b
    Pour j de 1 à a
        produit = produit + 1

Afficher produit
5. Tester si un tableau est trié (ordre croissant)

Description :
Vérifier si un tableau est trié en ordre croissant.

Pseudocode :
Entrer n
Pour i de 0 à n-1
    Saisir T[i]

trie = vrai
Pour i de 0 à n-2
    Si T[i] > T[i+1] alors
        trie = faux
        Sortir de la boucle

Si trie alors
    Afficher "Le tableau est trié"
Sinon
    Afficher "Le tableau n'est pas trié"
6. Calcul de la médiane dans un tableau trié

Description :
Calculer la médiane d’un tableau trié.
 
Pseudocode :
Entrer n
Pour i de 0 à n-1
    Saisir T[i]  // supposé trié

Si n est impair alors
    med = T[n/2]
Sinon
    med = (T[(n/2) - 1] + T[n/2]) / 2

Afficher med
7. Inverser un tableau

Description :
Inverser les éléments d’un tableau.

Pseudocode :
Entrer n
Pour i de 0 à n-1
    Saisir T[i]

Pour i de 0 à (n/2)-1
    temp = T[i]
    T[i] = T[n - i - 1]
    T[n - i - 1] = temp

Afficher T
8. Produit vectoriel (3D)

Description :
Calculer le produit vectoriel de deux vecteurs en 3 dimensions.

Pseudocode :
Pour i de 0 à 2
    Saisir A[i]
Pour i de 0 à 2
    Saisir B[i]

C[0] = A[1]*B[2] - A[2]*B[1]
C[1] = A[2]*B[0] - A[0]*B[2]
C[2] = A[0]*B[1] - A[1]*B[0]

Afficher C
9. Produit vecteur-matrice

Description :
Multiplier un vecteur ligne par une matrice.

Pseudocode :
Entrer taille_vecteur n, colonnes_matrice m

Pour i de 0 à n-1
    Saisir V[i]

Pour i de 0 à n-1
    Pour j de 0 à m-1
        Saisir M[i][j]

Pour j de 0 à m-1
    R[j] = 0
    Pour i de 0 à n-1
        R[j] = R[j] + V[i] * M[i][j]

Afficher R


       La rédaction de ces pseudocodes m’a permis de structurer clairement les étapes des algorithmes avant leur implémentation en C. Cette démarche facilite la compréhension et l’identification des éventuelles erreurs logiques. Ces exercices renforcent la maîtrise des bases de la programmation algorithmique et la manipulation des structures de données fondamentales.
