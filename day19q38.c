#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num < 0)
        num = -num;

    while(num != 0) {
        sum += num % 10;  
        num /= 10;        
    }

    printf("Sum of digits is: %d\n", sum);

    return 0;
}
