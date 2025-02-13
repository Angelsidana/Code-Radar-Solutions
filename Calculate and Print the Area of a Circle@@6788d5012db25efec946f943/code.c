#include<stdio.h>
int main()
{
    float radius,area;
    const float pie=3.14;
    scanf("%f",&radius);
    area=pie*radius*radius;
    printf("the area of circle :%.2f\n ",area);
    return 0;
}