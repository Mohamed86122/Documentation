/*
Ecrire un algorithme qui calcule le schtroumpf des deux tableaux. Pour calculer le
schtroumpf, il faut multiplier chaque élément du tableau 1 par chaque élément du tableau 2,
et additionner le tout.


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size];
    int array2[size];

    printf("Enter the elements of array 1: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the elements of array 2: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
    }

    int dot_product = 0;
    for (int i = 0; i < size; i++) {
        dot_product += array1[i] * array2[i];
    }

    printf("The dot product of the two arrays is: %d\n", dot_product);
    return 0;
}
