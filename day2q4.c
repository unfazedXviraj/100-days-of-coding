#include<stdio.h>
int main(){
    float radii,area,circle;
    printf("The radius of the circle is:");
    scanf("%f",&radii);
    area=3.14*radii*radii;
    printf("The area of the circle is %f sq units \n", area);
    circle=2*3.14*radii;
    printf("The perimeter of the circle is %f sq units", circle);   
    return 0;
}
