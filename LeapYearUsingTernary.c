#include<stdio.h>
int main(){
    int x;
    printf("Enter a year: ");
    scanf("%d", &x);
    (x%400 ==0)||(x%4 == 0 && x%100 != 0)?printf("Leap Year"):printf("Not a Leap Year");
    return 0;
}