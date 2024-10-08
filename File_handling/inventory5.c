#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_item();
void del_item();
void saveto_file();
void loadfrom_file();
void display_stock();

typedef struct {
    char name[64];
    int id;
    float price;
    int quantity;
} Item;

Item *stock = NULL;
int count = 0;

int main() {
    int choice;
    do {
        printf("\nInventory System\n");
        printf("1. Add Item\n");
        printf("2. Delete Item\n");
        printf("3. Save Inventory to File\n");
        printf("4. Load Inventory from File\n");
        printf("5. Display Stock\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: add_item(); break;
            case 2: del_item(); break; // Fixed function name
            case 3: saveto_file(); break;
            case 4: loadfrom_file(); break;
            case 5: display_stock(); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    free(stock);

    return 0;
}

void add_item() {
    stock = realloc(stock, (count + 1) * sizeof(Item));
    if (stock == NULL) {
        perror("Error reallocating memory");
        return;
    }

    printf("Enter item name: ");
    scanf("%s", stock[count].name);
    printf("Enter item ID, its price and quantity:\n");
    scanf("%d %f %d", &stock[count].id, &stock[count].price, &stock[count].quantity); // Fixed missing parenthesis
    count++;
    printf("Item added successfully!\n");
}

void del_item() {
    int id, found = 0;
    printf("Enter item ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (stock[i].id == id) {
            found = 1;
            for (int j = i; j < count - 1; j++) {
                stock[j] = stock[j + 1];
            }
            count--;
            stock = realloc(stock, count * sizeof(Item));
            printf("Item deleted successfully!\n");
            break;
        }
    }
    if (!found) {
        printf("Item with ID %d not found!\n", id);
    }
}

void saveto_file() {
    FILE *fp1 = fopen("inventory.txt", "w");
    if (fp1 == NULL) {
        perror("Error opening file");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(fp1, "%s %d %.2f %d\n", stock[i].name, stock[i].id, stock[i].price, stock[i].quantity);
    }

    fclose(fp1);
    printf("Stock saved to file successfully!\n");
}

void loadfrom_file() {
    FILE *fp2 = fopen("inventory.txt", "r");
    if (fp2 == NULL) {
        perror("Error opening file");
        return;
    }

    count = 0;
    while (!feof(fp2)) {
        stock = realloc(stock, (count + 1) * sizeof(Item));
        if (fscanf(fp2, "%63s %d %f %d", stock[count].name, &stock[count].id, &stock[count].price, &stock[count].quantity) == 4) {
            count++;
        }
    }

    fclose(fp2);
    printf("Inventory loaded from file successfully!\n");
}

void display_stock() {
    printf("ID\tName\tPrice\tQuantity\n");
    printf("-----------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t%s\t%.2f\t%d\n", stock[i].id, stock[i].name, stock[i].price, stock[i].quantity);
    }
}
