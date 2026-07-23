#include<stdio.h>
int main(){
    float CP, SP;
    printf("Enter the cost price");
    scanf("%f",&CP);
    printf("Enter the selling price");
    scanf("%f",&SP);
    float profit, loss;
    if(SP>CP)
    printf("Profit = %f", SP-CP);
    else if(CP>SP)
    printf("Loss = %f", CP-SP);
    else
    printf("Neither Profit, Nor Loss");
    return 0;
} 