#include<stdio.h>
int main(){
    int x;
    printf("Enter Marks: ");
    scanf("%d", &x);
    if(x<=100 && x>80){
    printf("Excellent");
    }
    else if(x>60 && x<=80){
        printf("Very Good");
    }
    else if(x<=60 && x>40){
        printf("Good");
    }
    else{
        printf("Fail");
    }
    return 0;
}