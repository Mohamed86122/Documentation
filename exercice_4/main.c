/*
inverser un tableau en langage c
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[N];
    int i, j, temp;

    // Initialisation du tableau a
    for (i = 0; i < N; i++) {
        a[i] = i;
    }

    // Inversion des éléments du tableau
    i = 0;
    j = N - 1;
    while (i < j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }

    // Affichage du résultat
    printf("Tableau inversé :\n");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
