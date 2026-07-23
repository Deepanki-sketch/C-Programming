#include<stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%5==0)
    printf("Divisible");
    else
    printf("Not Divvisible");
    return 0;
}