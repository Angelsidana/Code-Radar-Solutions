#include<stdio.h>
int main()
{
    int a,b,c;
    float average;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    average=(a+b+c)/3.00;
    printf("Average: %.2f",average);
    return 0;
}