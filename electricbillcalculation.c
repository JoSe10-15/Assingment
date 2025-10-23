//calculate electric bill

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c programs calculating elecrtic bills

*/

#include<stdio.h>

float totalbill (int units,int amount);

 void main(){
  int units,amount;
  float bill;
  
  //user input
  printf("Input the number of units used:");
  scanf("%d", &units);
  
  //validation of user's input 
  if( units>0 && units<=100)
    amount=10;
  else if (units>100 && units<=200)
    amount=15;
  else if (units>200)
    amount=20;
    
 //function calling
   bill=totalbill(units,amount);
   
 printf("The total bill amount is =KES %.2f\n",bill);
 
 }
  //called function
 float totalbill(int units, int amount){
 
   float totalbill;
   
  totalbill = units * amount;
  
return totalbill;
}