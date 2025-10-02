//Exams condition program 

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c program checking the eligability of a student to sit for final exams

*/

#include<stdio.h>

//main function 
int main(){
     //variable declaration 
     float attendance,average_marks;
     
     //input attendance 
     printf("Enter students attendance in percentage:");
     scanf("%f",&attendance);
     //input average_marks 
     printf("Enter students average_marks:");
     scanf("%f",&average_marks);
     //verification of data
     if (attendance>=75 && average_marks>=40){
     printf("Eligible");
     }
     
     else{
     printf("Not eligible");
     }
     
 return 0;
     
}