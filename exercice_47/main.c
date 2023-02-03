/*

Triangle de pascal


*/




#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Enter the degree of the Pascal triangle: ");
    scanf("%d", &N);

    int P[N + 1][N + 1];
    for (int i = 0; i <= N; i++) {
        P[i][0] = 1;
        P[i][i] = 1;
        for (int j = 1; j < i; j++) {
            P[i][j] = P[i - 1][j - 1] + P[i - 1][j];
        }
    }

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }
    return 0;
}
