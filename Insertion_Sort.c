#include<stdio.h>
int main(){
    int i,j,key,a[100],n;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    printf("\nEnter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        key=a[i];
        j=i-1;
    
    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;
    }
}
    a[j+1]=key;

    printf("\nSorted Array: ");
    for(i=0;i<n;i++){
        printf(" %d",a[i]);
    }
}