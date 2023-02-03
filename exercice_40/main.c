/*
Faire un programme en langage c pour le calcul et l’affichage suivant :
 1 * 8 + 1 = 9
 12 * 8 + 2 = 98
 123 * 8 + 3 = 987
 1234 * 8 + 4 = 9876
 12345 * 8 + 5 = 98765
 123456 * 8 + 6 = 987654
 1234567 * 8 + 7 = 9876543
 12345678 * 8 + 8 = 98765432
 123456789 * 8 + 9 = 987654321


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     for (int i = 1; i <= 9; i++) {
        int num = (int) pow(10, i) - 1;
        int result = num * 8 + i;
        printf("%d * 8 + %d = %d\n", num, i, result);
    }
    return 0;
}
