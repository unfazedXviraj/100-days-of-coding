#include <stdio.h>
int main() {
    int n, i;
    printf("Enter a non-negative integer: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("Factorial of %d = %d\n", n, factorial);
    return 0;
}
