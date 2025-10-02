//Mobile data bundle purchase

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c program displaying mobile data bundle purchase 

*/

#include<stdio.h>

//main function 
int main(){
     //variable declaration 
     int choice;
     
     //Data presentation
     printf("1.100MB @ 50\n");
     printf("2.500MB @ 200\n");
     printf("3.1GB @ 350\n");
     printf("4.2GB @ 600\n");
     
     //prompt user to enter choice 
     printf("Enter your choice(1-4):");
     scanf("%d",&choice);
     
     //processing user's input
     if (choice==1){
             printf("You selected 100MB for KES 50\n");
      }
      else if(choice==2){
             printf("You selected 500MB for KES 200\n");
      }
      else if(choice==3){
             printf("You selected 1GB for KES 350\n");
      }        
      else if (choice==4){
             printf("Your have selected 2GB for KES 600\n");
      }
      
      else{
             printf("invalid choice");
      }
      
 return 0;
                                          
}