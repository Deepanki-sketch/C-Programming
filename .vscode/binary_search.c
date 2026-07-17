#include<stdio.h>
int main(){
    int i,j,key,flag,position,a[100],n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter Array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter element to find: ");
    scanf("%d",&key);
    i=0,j=n-1,flag=0;
    while(i<=j){
        int mid=(i+j)/2;
    if(a[mid]==key){
        flag =1;
        position = mid+1;
        break;
    }
    if(a[mid]<key){
        i=mid+1;
    }
    if(a[mid]>key){
        j=mid-1;
    }
}
    if(flag == 1){
        printf("Element found at: %d", position);
    }
    else{
        printf("Element not found");
    }
    return 0;
}