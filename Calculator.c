#include<stdio.h>
int main(){
    int a,b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    char ch;
    printf("Enter the operator: ");
    scanf(" %c", &ch);
    if(ch == '+'){
        printf("%d", a+b);
    }
    else if(ch == '-'){
        printf("%d", a-b);
    }
    else if(ch == '*'){
    printf("%d",a*b);
    }
    else if(ch == '/'){
        if(b != 0){
        printf("%d", a/b);
    }
        else{
            printf("Division by zero invalid");
        }
    }
    else{
        printf("Invalid Operator");
    } 
    return 0;   
}