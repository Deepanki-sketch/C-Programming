#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two number: ");
    scanf("%d %d", &x, &y);
    char ch;
    printf("Enter Operator: ");
    scanf(" %c", &ch);
    switch(ch){
        case '+' :
        printf("%d", x+y);
        break;
        case '-' :
        printf("%d", x-y);
        break;
        case '*' :
        printf("%d", x*y);
        break;
        case '/' :
        printf("%d", x/y);
        break;
        default :
        printf("Invalid Operator");
    }
    return 0;
 }
