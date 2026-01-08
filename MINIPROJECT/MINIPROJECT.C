#include <stdio.h>

int main() {
    int vehicleCount[4] = {0, 0, 0, 0};
    int choice, totalVehicles;

    printf("Toll Booth Vehicle Count System\n");
    printf("Vehicle Types:\n");
    printf("0 - Car\n");
    printf("1 - Bike\n");
    printf("2 - Bus\n");
    printf("3 - Truck\n");

    printf("\nEnter total number of vehicles: ");
    scanf("%d", &totalVehicles);

    for(int i = 0; i < totalVehicles; i++) {
        printf("Enter vehicle type (0-3): ");
        scanf("%d", &choice);

        if(choice >= 0 && choice <= 3) {
            vehicleCount[choice]++;
        } else {
            printf("Invalid vehicle type! Try again.\n");
            i--; // repeat this entry
        }
    }

    printf("\nVehicle Count Summary:\n");
    printf("Cars   : %d\n", vehicleCount[0]);
    printf("Bikes  : %d\n", vehicleCount[1]);
    printf("Buses  : %d\n", vehicleCount[2]);
    printf("Trucks : %d\n", vehicleCount[3]);

    return 0;
}
