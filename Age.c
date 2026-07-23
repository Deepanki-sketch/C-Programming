#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the age of Ram, Shyam and Ajay: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b){
        if(a<c){
        printf("Ram is youngest");
    }
        else{
        printf("Ajay is youngest");
        }
    }
    else{
        if(b<c){
        printf("Shyam is youngest");
    } 
       else{
        printf("Ajay is youngest");
       }
    } 
    return 0;
}