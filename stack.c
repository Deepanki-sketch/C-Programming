#include<stdio.h>
int a[10], top=-1;
void push();
void pop();
void peek();
void display();
int main(){
    int choice;
    while(1){
        printf("\n1=Push");
        printf("\n2=Pop");
        printf("\n3=Peek");
        printf("\n4=Display");
        printf("\n5=Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        printf("You entered: %d", choice);
    if(choice==1){
         push();
    }
    else if(choice == 2){
        pop();
    }
    else if(choice ==3){
        peek();
    }
    else if(choice ==4){
        display();
    }
    else if(choice==5){
         break;
    }
    else{
        printf("Invalid choice");
    }
  }
  return 0;
}
void push(){
    if(top == 9){
        printf("Overflow");
    }
    else{
        printf("\nEnter elements to push:");
        scanf("%d",&a[++top]);
        printf("Push executed successfully");
    }
}
void pop(){
    if(top==-1){
        printf("underflow");
    }
    else{
        printf("\nElement popped: %d",a[top]);
        top--;
        printf("\nTop executed successfully");
    }
}
void peek(){
    if(top==-1){
        printf("\nunderflow");
    }
    else{
        printf("\nPeek executed successfully\n");
        printf("\n%d",a[top]);
    }
}
void display(){
    if(top==-1){
        printf("\nunderflow");
    }
    else{
        int i;
        for(i=top;i>=0;i--){
            printf("\n%d",a[i]);
        }
    }
}



