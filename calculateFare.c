//calculateFare

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c programs calculating fare

*/

#include<stdio.h>

float fare(float distance,int amount);

 void main(){
  float distance,cost;
  int amount=50;
  
  //user input
  printf("Input the distance tranelled in Km:");
  scanf("%f", &distance);
    
 //function calling
   cost=fare(distance,amount);
   
 printf("The total cost is =KES %.2f\n",cost);
 
 }
  //called function
 float fare(float distance, int amount){
 
   float fare;
   
   fare = distance * amount;
  
return fare;
}