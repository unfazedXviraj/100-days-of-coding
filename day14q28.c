#include <stdio.h>

int main()
{
    int n, i,product;
    printf("Enter a positive integer n (n >= 2): ");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2)
    {
        product *= i;
    }

    if
    {
        printf("The product of even numbers from 1 to %d is: %lld\n", n, product);
    }
        else
    {
        printf("No even numbers in the range 1 to %d.\n", n);
    }

    return 0;
}
