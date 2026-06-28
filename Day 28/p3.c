#include <stdio.h>

int main() {
    int totalSeats = 50;
    int booked = 0;
    int choice, tickets;

    do {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Available Tickets\n");
        printf("2. Book Tickets\n");
        printf("3. Cancel Tickets\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Available Tickets: %d\n",
                   totalSeats - booked);
            break;

        case 2:
            printf("Enter number of tickets to book: ");
            scanf("%d", &tickets);

            if (tickets > 0 &&
                booked + tickets <= totalSeats) {
                booked += tickets;
                printf("%d ticket(s) booked successfully.\n",
                       tickets);
            } else {
                printf("Not enough tickets available.\n");
            }
            break;

        case 3:
            printf("Enter number of tickets to cancel: ");
            scanf("%d", &tickets);

            if (tickets > 0 && tickets <= booked) {
                booked -= tickets;
                printf("%d ticket(s) cancelled successfully.\n",
                       tickets);
            } else {
                printf("Invalid cancellation request.\n");
            }
            break;

        case 4:
            printf("Thank you for using Ticket Booking System.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
} 