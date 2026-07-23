#include<stdio.h>
int main(){
    int x, y;
    printf("Enter a coordinate: ");
    scanf("(%d,%d)", &x, &y);
    if(x>=0 && y>=0){
        printf("First Quadrant");
    }
    else if(x<0 && y>=0){
        printf("Second Quadrant");
    }
    else if (x<0 && y<0)
    {
        printf("Third Quadrant");
    }
    else{
        printf("Fourth Quadrant");
    }
    return 0;
    }
