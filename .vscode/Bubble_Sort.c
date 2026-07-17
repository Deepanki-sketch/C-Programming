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
    for(i=0;i<10;i++){
        for(j=0;j<9-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("Sorted Array: \n");
    for(i=0;i<10;i++){
        printf("%d\n",a[i]);
    }
}