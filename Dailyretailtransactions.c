//daily sales

/*
Name: Joseph Mokua
Reg No: PA106/G/28832/25
Description: C file calculating retail shop daily sales
*/
#include <stdio.h>

int main() {
    FILE *file;
    float amount, total = 0.0;
    int n, i;

    //Ask user for number of transactions
    printf("Enter number of sales transactions: ");
    scanf("%d", &n);

    //Open file to store transactions
    file = fopen("sales.txt", "w");
    if (file == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    //Get sales amounts from user
    for (i = 0; i < n; i++) {
        printf("Enter amount for sale %d: ", i + 1);
        scanf("%f", &amount);
        fprintf(file, "%.2f\n", amount);
    }

    fclose(file); 

    //Reopen file to read and calculate total
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    while (fscanf(file, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(file);

    //Display the result
    printf("\nTotal sales for the day: %.2f\n", total);

    return 0;
}

    