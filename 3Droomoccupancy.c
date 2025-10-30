//3D array displaying hotel vacancy 

/*
Name: Joseph Mokua
Reg No: PA106/G/28832/25
Description: 3D array representing room occupancy across multiple hotel branches
*/

#include <stdio.h>

int main() {
    int branch, floor, room;
    int totalOccupied = 0;
    
    int chain[3][5][10] = {
        {   
            {1,0,1,1,0,1,0,1,1,0},
            {0,1,1,0,1,1,0,1,1,0},
            {1,1,0,1,1,0,1,0,1,1},
            {0,0,1,0,1,1,0,1,0,1},
            {1,1,1,0,1,0,1,1,0,0}
        },
        {   
            {1,1,1,0,0,1,1,0,1,1},
            {0,1,1,0,1,0,1,1,0,0},
            {1,0,1,1,0,1,0,1,1,0},
            {1,1,0,1,0,1,1,0,1,1},
            {0,0,1,1,1,0,1,1,0,1}
        },
        {   
            {1,1,0,1,1,0,1,1,1,0},
            {0,1,1,0,1,1,0,0,1,1},
            {1,0,1,1,0,1,0,1,0,1},
            {1,1,1,0,0,1,1,0,1,0},
            {0,1,0,1,1,1,0,1,0,1}
        }
    };

    // Display occupancy per branch
    for (branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);
        for (floor = 0; floor < 5; floor++) {
            printf("  Floor %d: ", floor + 1);
            for (room = 0; room < 10; room++) {
                printf("%d ", chain[branch][floor][room]);
                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
            printf("\n");
        }
        printf("\n");
    }

    // Display total number of occupied rooms
    
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}