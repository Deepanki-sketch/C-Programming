#include<stdio.h>
int main(){
    int i,a,n;
    printf("Number Of Terms: ");
    scanf("%d", &n);
    a=3;
    for(i=1;i<=n;i++){
        printf("%d\n", a);
        a=a*4;
    }
}