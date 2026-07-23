#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n>0)
    printf("%d",n);
    //make it positive 
    if(n<0)
    n = n*(-1);
    printf("%d",n);
    return 0;
}