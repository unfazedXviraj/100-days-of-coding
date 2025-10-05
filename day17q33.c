#include <stdio.h>
#include <math.h>
int main()
{
    int num, original, sum = 0, digits = 0, temp;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original = num;
    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    if (sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);
    return 0;
}
