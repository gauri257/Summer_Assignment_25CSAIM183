#include <stdio.h>

int main()
{
    char name[50];
    int seats;

    printf("Enter Your Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    printf("\n----- Ticket Details -----\n");
    printf("Passenger Name : %s\n", name);
    printf("Seats Booked   : %d\n", seats);
    printf("Booking Successful!\n");

    return 0;
}