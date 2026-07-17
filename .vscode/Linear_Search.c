#include<stdio.h>
int main(){
    int a[100],flag = 0,key, position,n,i;
    printf("Enter no of elements: ");
    scanf("%d",&n);
    printf("Enter Array Elements ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            flag = 1;
            position = i+1;
            break;
        }
    }
    if(flag ==0){
        printf("Element not found");
    }
    else{
        printf("Element found at %d", position);
    }
    return 0;
}