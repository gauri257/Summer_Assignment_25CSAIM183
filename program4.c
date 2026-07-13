#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i;

    do {
        printf("\n--- Inventory Menu ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Item ID: ");
                scanf("%d", &item[n].id);

                printf("Enter Item Name: ");
                scanf("%s", item[n].name);

                printf("Enter Quantity: ");
                scanf("%d", &item[n].quantity);

                printf("Enter Price: ");
                scanf("%f", &item[n].price);

                n++;
                break;

            case 2:
                printf("\nID\tName\tQty\tPrice\n");
                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price);
                }
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}