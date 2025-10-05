
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>=0)
    {
        if(n==0)
        {
         printf("Number entered is zero");
        }
        else
        {
         printf("%d is positive",n);
        }
    }
    else
    printf("%d is negative",n);
    return 0;
}
