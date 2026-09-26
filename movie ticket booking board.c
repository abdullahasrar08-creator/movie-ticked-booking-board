#include <stdio.h>

void showSeats(int grid[4][4]) {
    printf("\n--- Seating Map (0=Available, 1=Booked) ---\n");
    printf("\tCol 0\tCol 1\tCol 2\tCol 3\n");
    for (int i = 0; i < 4; i++) {
        printf("Row %d:\t", i);
        for (int j = 0; j < 4; j++) {
            printf("%d\t", grid[i][j]);
        }
        printf("\n");
    }
}

void bookSeat(int grid[4][4]) {
    int r, c;
    printf("\nEnter Row (0-3): ");
    scanf("%d", &r);
    printf("Enter Column (0-3): ");
    scanf("%d", &c);

    if (r < 0 || r > 3 || c < 0 || c > 3) {
        printf("Invalid choice!\n");
    } else if (grid[r][c] == 1) {
        printf("Sorry, seat already taken!\n");
    } else {
        grid[r][c] = 1;
        printf("Seat booked successfully!\n");
    }
}

int main() {
    // Initializing all seats to 0 (Available)
    int seats[4][4] = { {0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0} };
    int choice;

    while (1) {
        printf("\n1. View Seats\n2. Book a Seat\n3. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 1) showSeats(seats);
        else if (choice == 2) bookSeat(seats);
        else if (choice == 3) break;
        else printf("Try again.\n");
    }
    return 0;
}
