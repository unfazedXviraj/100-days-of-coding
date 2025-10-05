#include <stdio.h>
#include <math.h>
int main()
{
    int num, first, last, digits = 0, power, middle, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);  
    int original_num = num;
    if(num < 0)
        num = -num;
    last = num % 10;   
    int temp = num;
    while(temp != 0) {
        first = temp;
        temp /= 10;
        digits++;
    }   
    if(digits == 1) {
        printf("Swapped number: %d\n", original_num);
        return 0;
    }
    power = (int)pow(10, digits - 1);
    middle = (num % power) / 10; 
    swapped = last * power + middle * 10 + first;
    if(original_num < 0)
        swapped = -swapped;
    printf("Swapped number: %d\n", swapped);
    return 0;
}
