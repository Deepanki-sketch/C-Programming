#include<stdio.h>
int main(){
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    if(a%5 == 0 || a%3 == 0){
        if(a%15 != 0)
        printf("Divisible by 5 or 3 but not by 15");
        else
        printf("Divisible by 15");
    }
    else    
    printf("Not Divisible");
    return 0;
}