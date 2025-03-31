#include<stdio.h>
int main(){
    int a=0;
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        if(n%i==0){
            a=1;
            break;
        }
    }
    if(a==0){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;
}