#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("negtive integer\n");
        return 1;
    }
    printf("Numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
