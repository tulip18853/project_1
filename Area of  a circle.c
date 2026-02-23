#include<stdio.h>
#include<conio.h>
void main(){
    const float pi=3.14;
    float radius,area;
    printf("enter the radius of the circle");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("the arae of the circle is %f",area);
} 
