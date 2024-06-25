#include <stdio.h>

int main()
{
    int i, j, k, n;
    k = 6; // Change this value to an odd number to see the difference
    n = k / 2;

    for (i = 0; i < k; i++) {
        for (j = 0; j < k; j++) {
            // Condition to print '*' for the diamond pattern
            if (i + j == n || j - i == n || i - j == n || i + j == k + n - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
