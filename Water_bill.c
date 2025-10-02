//water bill charges

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c program water bill calculator

*/

#include<stdio.h>

//main function 
int main(){
     //variable declaration 
     int units;
     float total_bill;
     
     //input units
     printf("Enter number of water units consumed:");
     scanf("%d",&units);
     
     //verification of data
     if (units >=0 && units <=30){
     total_bill=units*20;
     }
     
     else if(units >=31 && units <=60){
     total_bill=units*25;
     }
     
     else if(units>60){
    total_bill=units*30;
    }
    
    //Display bill
    printf("The total water bill is %.2f\n",total_bill);
    
 return 0;
     
}