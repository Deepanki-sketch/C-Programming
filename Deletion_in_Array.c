#include<stdio.h>
#define MAX 100 
int main(){
    int a[MAX],position, n,i;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the Array Elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
  
    printf("Enter the position to delete: ");
    scanf("%d",&position);

    for(i= position-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    printf("New Array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}