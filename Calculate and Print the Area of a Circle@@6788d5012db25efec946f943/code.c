#include<stdio.h>
int main()
{
    float radius,area;
    const float pie=3.14;
    scanf("%f",&radius);
    area=pie*radius*radius;
    printf("Area: %.2f ",area);
    return 0;
}