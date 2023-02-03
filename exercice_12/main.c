/*
Algorithme en c fusionner un tableau de deux dimension en tableau un seul dimension
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rows, columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int array[rows][columns];
    int merged_array[rows * columns];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            merged_array[k] = array[i][j];
            k++;
        }
    }

    printf("The merged array is: \n");
    for (int i = 0; i < rows * columns; i++) {
        printf("%d ", merged_array[i]);
    }
    printf("\n");
    return 0;
}
