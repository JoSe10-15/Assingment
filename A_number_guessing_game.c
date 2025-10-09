//Guessing game

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c program implementing a number guessing game

*/

#include<stdio.h>

int main() {

    // Variable Declarations
    int secretNumber;
    int guess = 0;
    int attempts = 0;
     
     //data implementation 
     secretNumber=(rand() % 20) + 1;
     printf("I think of a number from (1-20).Can you guess it?\n");
     
     //___while loop___
     while (guess!=secretNumber){
     attempts++;
     
        //prompt user to guess a number
        printf("Attempts %d.Enter your guess:",attempts);
        
        //Read of input
        if (scanf("%d",&guess))
        
        //conditioning of the results 
        if(guess<secretNumber){
        printf("Too low!\n");
        }  else if(guess>secretNumber){
        printf("Too high!\n");
        }
        }
        //running results 
        printf("***Congratulations!***\n", secretNumber);
        printf("Number of attempts is %d",attempts);
        
    return 0;
}