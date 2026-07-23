#include<stdio.h>
int main(){
    float f;                  //f = 3.1
    printf("Enter a number");
    scanf("%f", &f);
    int x = (int)f;           // x = 3
    float a;
    a = (float)x;             // a = 3           
    if(f-a == 0)
    printf("It is an integer");
    else
    printf("It is not an integer");
    return 0;
    
}