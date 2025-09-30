#include <stdio.h>

int main()
{
    int num, original, reversed = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while(num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Check if it's a palindrome
    if(original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
