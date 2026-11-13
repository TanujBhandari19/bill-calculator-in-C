#include <stdio.h>

int main()
{
    int choice, quantity;
    int total = 0;

    do
    {
        printf("\n****** RESTAURANT MENU ******\n");
        printf("1. Burger - Rs. 120\n");
        printf("2. Pizza  - Rs. 250\n");
        printf("3. Pasta  - Rs. 180\n");
        printf("4. Sandwich - Rs. 90\n");
        printf("5. Cold Drink - Rs. 50\n");
        printf("6. Veg Thali - Rs. 150\n");
        printf("7. Ice Cream - Rs. 80\n");
        printf("8. French Fries - Rs. 70\n");
        printf("9. Coffee - Rs. 60\n");
        printf("10. Generate Bill & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
 
        switch (choice)
        {
            case 1:
                printf("Enter quantity of Burger: ");
                scanf("%d", &quantity);
                total = total + 120 * quantity;
                printf("Added %d Burger.\n", quantity);
                break;

            case 2:
                printf("Enter quantity of Pizza: ");
                scanf("%d", &quantity);
                total = total + 250 * quantity;
                printf("Added %d Pizza.\n", quantity);
                break;

            case 3:
                printf("Enter quantity of Pasta: ");
                scanf("%d", &quantity);
                total = total + 180 * quantity;
                printf("Added %d Pasta.\n", quantity);
                break;

            case 4:
                printf("Enter quantity of Sandwhich: ");
                scanf("%d", &quantity);
                total = total + 90 * quantity;
                printf("Added %d Sandwhich.\n", quantity);
                break;
                
            case 5:
                printf("Enter quantity of Cold Drink: ");
                scanf("%d", &quantity);
                total = total + 50 * quantity;
                printf("Added %d Cold Drink.\n", quantity);
                break;

            case 6:
                printf("Enter quantity of Veg Thali: ");
                scanf("%d", &quantity);
                total = total + 150 * quantity;
                printf("Added %d Veg Thali.\n", quantity);
                break; 

            case 7:
                printf("Enter quantity of Ice Cream: ");
                scanf("%d", &quantity);
                total = total + 80 * quantity;
                printf("Added %d Ice Cream.\n", quantity);
                break;

            case 8:
                printf("Enter quantity of French Fries: ");
                scanf("%d", &quantity);
                total = total + 70 * quantity;
                printf("Added %d French Fries.\n", quantity);
                break;

            case 9:
                printf("Enter quantity of Coffee: ");
                scanf("%d", &quantity);
                total = total + 60 * quantity;
                printf("Added %d Coffee.\n", quantity);
                break;

            case 10:
                 printf("\n---------------------------\n");
                 printf("Total Bill: Rs. %d\n", total);
                 printf("Thank you! Visit again.\n");
                 break;
 
            default:
                 printf("Invalid choice! Please select 1-10.\n");
        }
 
    } while (choice != 10);
 
    return 0;
}
 
 
        
   