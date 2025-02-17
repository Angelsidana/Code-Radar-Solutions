#include<stdio.h>
int main()
{
    int a;
    scanf("%d ",&a);
    if(a<=1)
    {
        printf("Not Prime");
    }
    else if(a==2){
        printf("Prime");
    }
    return 0;
}