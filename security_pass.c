//security_password

/*
Name:Joseph Mokua
Reg no:PA106/G/28832/25
Description:c program security password 

*/

#include <stdio.h>

int main() {
    // Variable to hold the integer input
    int password; 
    // Variable for the correct password
    int correct_password = 1234; 

    do {
        printf("Enter the password: ");
        // Read the input 
        scanf("%d", &password); 

        // Comparison logic
        if (password != correct_password) {
            printf("Incorrect password. Try again\n");
        }

    // Loop continues as long as the passwords are not equal
    } while (password != correct_password); 

    printf("Access Granted!\n");

    return 0;
}
