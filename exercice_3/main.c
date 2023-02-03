/*

calcul diagonale de tableau de deux dimension

*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[N][N];
    int i, j, sum = 0;

    // Initialisation du tableau a
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            a[i][j] = i + j;
        }
    }

    // Calcul de la somme des éléments sur la diagonale
    for (i = 0; i < N; i++) {
        sum += a[i][i];
    }

    // Affichage du résultat
    printf("Somme des éléments sur la diagonale : %d\n", sum);
    return 0;
}
