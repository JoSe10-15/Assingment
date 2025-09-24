//Compound interest 

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:Finding the compoud interest
A=P(1+(r/100)/n)^(n*t)
*/

#include<stdio.h>
#include <math.h>

//main function 
int main(){
     //variable declaration 
     float principle, rate, time, amount;
     int n;
     //prompt the user to enter amount 
     printf("Enter principle amount:");
     scanf("%f", &principle);
     
     //prompt user to enter rate 
     printf("Enter the rate in (%%):");
     scanf("%f",&rate);
     
     //prompt user to enter time
     printf("Enter time:");
     scanf("%f",&time);
     
     //prompt user to enter the number of Compounding a year 
     printf("Enter numberofcompoundingayear:");
     scanf("%d",&n);
     
     //compute amount
     amount= principle* pow((1+(rate/100)/n),n*time);
     
     //display amount
     printf("\n compound amount in ksh %.2f",amount);
     printf("\n compound interest in ksh %.2f",amount-principle);
     return 0;
     
}