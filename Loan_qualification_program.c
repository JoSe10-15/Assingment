//Bank loan qualification program 

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c program implementing bank requirements 

*/

#include<stdio.h>

//main function 
int main(){
     //variable declaration 
     int age;
     float annual_income;
     
     //prompt user to enter his/her age
     printf("Enter your age:");  
     scanf("%d",&age);
     
     //prompt user to enter the annual_income 
     printf("Enter your annual_income:");
     scanf("%f",&annual_income);
     
     //validation of user's details 
     if (age>=21 && annual_income>=21000){
     printf("Congratulations you qualify for a loan\n");
     }
     else{
      printf("Unfortunately,we are unable to offer you a loan at this time\n");
     }
     
     return 0;
     
}