#include<stdio.h>
int main(){
    int  i,n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int hf = 1;
    for(i=1;i<n;i++){
        if(n%i == 0)hf=i;
        }
        printf("Highest Factor: %d", hf);
    return 0;
}