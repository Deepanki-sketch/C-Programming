//Take integer 'x' as input and print half of the number
#include<stdio.h>
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    //typecasting
    float y =(float)x;
    printf("%f",y/2);
    return 0;
}