#include <stdio.h>
int main() {
    int n, i, sum = 0, odd = 1;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += odd;
        odd += 2;
    }
    printf("The sum of first %d odd numbers is: %d\n", n, sum);
    return 0;
}
