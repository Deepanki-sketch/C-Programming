#include<stdio.h>
int main(){
float length, breadth, area, perimeter;
printf("Enter length and breadth \n");
scanf("%f %f", &length, &breadth);
area = length*breadth;
perimeter = 2*(length+breadth);
printf("Area = %f\n", area);
if(area>perimeter)
printf("Area is greater\n");
else if(area=perimeter)
printf("Perimeter and Area are equal\n");
else
printf("Perimeter is greater\n");
return 0;

}


