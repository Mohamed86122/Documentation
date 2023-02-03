/*
programme en c de multiplication de tableau de dimension
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[N][N], b[N][N], c[N][N];
    int i, j, k;

    // Initialisation des tableaux a et b
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            a[i][j] = i + j;
            b[i][j] = i - j;
        }
    }

    // Multiplication des tableaux
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            c[i][j] = 0;
            for (k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Affichage du résultat
    printf("Résultat de la multiplication :\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
