#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is the greatest integer",a);
    else if(b>c && b>a)
    printf("%d is greatest", b);
    else
    printf("%d is greatest",c);
    return 0;
}