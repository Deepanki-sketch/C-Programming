#include<stdio.h>
int main(){
    int a=10, b=10, r=7;
    int x,y;
    printf("Enter a coordinate: ");
    scanf("%d,%d", &x,&y);
    if((x-a)*(x-a) +(y-b)*(y-b) == r*r){
        printf("Lies on the circle");
    }
    else if((x-a)*(x-a) +(y-b)*(y-b) > r*r){
        printf("Lies outside the circle");
    }
    else{
        printf("Lies inside the circle");
    }
    return 0;
}