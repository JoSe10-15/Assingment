//convertToCelsius

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c programs converting to celcius

*/

#include<stdio.h>

float celcius(float f);

 void main(){
  float f,degree;
  
  //user input
  printf("Enter temperature in Fahrenheit:");
  scanf("%f", &f);
    
 //function calling
   degree=celcius(f);
   
 printf("Temperature in degrees celcius%.1f\n",degree);
 
 }
  //called function
 float celcius(float f){
 
   float celcius;
   
   celcius = (f-32) * 5/9;
  
return celcius;
}