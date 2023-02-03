/*

Ecrire un algorithme qui effectuer la lecture d’une matrice carrée A ainsi que sa taille n et
affiche la trace de A.
(Pour une matrice A(ai,j), Trace(A) = ∑ai,i la somme des éléments sur la diagonale)


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
    printf("Entrez la taille de la matrice carrée: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Entrez les éléments de la matrice:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += a[i][i];
    }

    printf("Trace de la matrice: %d\n", trace);
    return 0;
}
