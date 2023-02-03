/*
En langage c ajouter un element au tableau et trier le tableau en ordre croissant

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[N];
    int i, j, temp, new_element, n = N;

    // Initialisation du tableau a
    for (i = 0; i < N; i++) {
        a[i] = N - i;
    }

    // Ajout d'un nouvel élément
    printf("Entrez le nouvel élément : ");
    scanf("%d", &new_element);
    a[N] = new_element;
    n++;

    // Tri du tableau en ordre croissant
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Affichage du résultat
    printf("Tableau trié en ordre croissant :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
