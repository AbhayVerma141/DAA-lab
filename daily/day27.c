/*A mall has a 2D parking layout (rows and columns). Some spots are empty (0), and some are occupied (1). 
You need to write a system that automatically finds the first available spot for an arriving car and parks it.*/


#include <stdio.h>

int main() {

    int rows = 3, cols = 4;

    int parking[3][4] = {
        {1, 1, 0, 1},
        {1, 0, 1, 1},
        {0, 1, 0, 1}
    };

    int found = 0;

    printf("Parking Layout Before:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", parking[i][j]);
        }
        printf("\n");
    }

    // Find first available parking spot
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < cols; j++) {

            if (parking[i][j] == 0) {

                parking[i][j] = 1;

                printf("\nCar parked at Row %d, Column %d",
                       i + 1, j + 1);

                found = 1;
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    if (found == 0) {
        printf("\nParking Full! No available spots.");
    }

    printf("\n\nParking Layout After:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", parking[i][j]);
        }
        printf("\n");
    }

    return 0;
}
