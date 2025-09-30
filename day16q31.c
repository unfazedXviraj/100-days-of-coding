#include <stdio.h>

int main()
{
    int num, i;
    int binary[32]; 
    int index = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if(num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    // Handle negative numbers if desired (prints 2's complement form)
    unsigned int n = num;

    // Convert to binary
    while(n > 0) {
        binary[index++] = n % 2;
        n /= 2;
    }

    printf("Binary: ");
    for(i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}

