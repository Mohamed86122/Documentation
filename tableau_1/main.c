/*

Ecrire un programme en langage c qui permet d’insérer une valeur X dans un tableau T, supposé trié, de
façon à respecter l’ordre des éléments de T. le tableau T contient N éléments et sera
dimensionné à N+1 (pour permettre de ranger X)

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[100] = {1, 2, 3, 4, 5};
    int n = 5;
    int x = 0;
    insert(t, n, x);
    n++;
    printf("Tableau après insertion de %d:\n", x);
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    int i = n - 1;
    while (i >= 0 && t[i] > x) {
        t[i + 1] = t[i];
        i--;
    }
    t[i + 1] = x;
    return 0;
}
