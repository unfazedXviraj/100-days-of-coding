#include<stdio.h>

void main(){
    int x,y;
    printf("Enter 1st number:");
    scanf("%d",&x);

    printf("Enter 2nd number:");
    scanf("%d",&y);


    printf("The sum of the numbers is:%d \n",x+y); // addition

  
    printf("The difference of the numbers is:%d \n",x-y); // subtraction
 
    
    printf("The product of the numbers is:%d \n",x*y); // multiplication

    // quotient 
    if (y==0)
    printf("The quotient of the numbers is: Indefinite \n"); 
    else 
    printf("The quotient of the numbers is:%d \n", x/y);

    

}
