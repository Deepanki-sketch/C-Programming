#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a%3==0 && a%15 != 0 || a%5 == 0 && a%15 != 0)
    printf("Number is divisible by 3 or 5");
    else
    printf("Not Divisible");
    return 0;
}