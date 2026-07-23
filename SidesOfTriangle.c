#include<stdio.h>
int main(){
    int a, b,c;
    printf("Enter sides of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    printf("Allowed to be sides of a triangle");
    else
    printf("Not allowed");
    return 0;
}