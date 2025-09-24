//volume and surface area of cylinder

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:Finding the volume and surface area of a cylinder 
v=3.142*r^2*h
SA=2(3.142*r^2) + 2*3.142*r*h
but Area=3.142*r^2
*/

#include<stdio.h>

//main function 
int main(){
     //variable declaration 
     float radius, height, area, volume,surface_area;
     
     //prompt the user to enter the radius 
     printf("Enter the radius in:");
     scanf("%f", &radius);
     
     //prompt user to enter the height 
     printf("Enter the height in:");
     scanf("%f",&height);
     
     //compute area
     area=3.142*(radius*radius);
     
     //compute volume
     volume=area*height;
     
     //compute surface_area 
     surface_area=2*area + 2*3.142*radius*height;
     
     //display answers 
     printf("\n The volume is%.2f",volume);
     printf("\n The surface_area is%.2f",surface_area);
     
     return 0;
     
}