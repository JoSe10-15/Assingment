//2D array room Occupancy 

/*
Name: Joseph Mokua
Reg No: PA106/G/28832/25
Description: 2D array representing room occupancy for one hotel branch
*/

#include <stdio.h>

int main() {
    int floor, room;
    int occupied, vacant;
    
    int occupancy[5][10] = {
        {1, 0, 1, 1, 0, 1, 0, 1, 1, 0},
        {0, 1, 1, 0, 0, 1, 1, 0, 1, 1}, 
        {1, 1, 0, 1, 1, 0, 1, 0, 1, 1}, 
        {0, 0, 1, 0, 1, 1, 0, 1, 0, 1}, 
        {1, 1, 1, 0, 1, 0, 1, 1, 0, 0} 
    };

    

    // Display the occupancy data
    for (floor = 0; floor < 5; floor++) {
        printf("Floor %d: ", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("%d ", occupancy[floor][room]);
        }
        printf("\n");
    }

    // Calculate and display number of occupied and vacant rooms per floor
    for (floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d->Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}