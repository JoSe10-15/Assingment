//1D weekly revenue

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:1D array of weekly revenue

*/

#include<stdio.h>

 int main(){
   double revenue[7]={1250.50,1300.00,1405.80,1650.00,1420.00,1800.20,1525.50};
   double totalrevenue;
   double total=0;
   int i;
   //for loop
   for(i=0; i<7; i++){
   printf("%.2f\n",revenue[i]);
   
   total +=revenue[i];
   }
   
   totalrevenue=total/7;
   
   
   printf("The total weekly revenue earned = KES%.2f\n",total);
   printf("The average daily vrevenue =KES%.2f\n",totalrevenue);
   
   return 0;
}