#include<stdio.h>
int main(){
    float p,r,t,simpleinterest;
    printf("Enter the value of P and R and T: ");
    scanf("%f %f %f",&p,&r,&t);
    simpleinterest = (p*r*t)/100;
    printf("%f",simpleinterest);
    return 0;
}