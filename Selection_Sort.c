#include<stdio.h>
int main(){
    int i,j,t,a[10];
    printf("Enter array elements:\n");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Original Array: \n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Sorted Array: \n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}