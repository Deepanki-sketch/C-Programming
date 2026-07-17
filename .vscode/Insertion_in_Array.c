#include<stdio.h>
#define MAX 100 
int main(){
    int a[MAX], element, position, n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the element: ");
    scanf("%d",&element);
    printf("Enter the position: ");
    scanf("%d",&position);

    for(i=n;i>=position;i--){
        a[i]=a[i-1];
    }
    a[position-1]=element;
    n++;
    printf("New Array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}