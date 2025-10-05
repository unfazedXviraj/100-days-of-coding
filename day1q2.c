#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter 1st number:");
    scanf("%d",&x);
    printf("Enter 2nd number:");
    scanf("%d",&y);
    printf("The sum of the numbers is:%d \n",x+y);   
    printf("The difference of the numbers is:%d \n",x-y); 
    printf("The product of the numbers is:%d \n",x*y); 
    if (y==0)
    printf("The quotient of the numbers is: Indefinite \n"); 
    else 
    printf("The quotient of the numbers is:%d \n", x/y);
}
