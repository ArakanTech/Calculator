
/* Simple Calculator Project */

#include <stdio.h>

int main() {

    float a, b;
    int choice;

    // Keep running until user enters 0
    while (1) {

        printf("\n1. Addition");
        printf("\n2. Subtraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n0. Exit");

        printf("\nPlease select any option according to your required then press Enter: ");
        scanf("%d", &choice);

        // Stop program if user enters 0

        if (choice == 0) {

            printf("Program ended.\n");
            break;
        }

        printf("Enter two numbers and then press Enter: ");
        scanf("%f %f", &a, &b);

        switch(choice) {

            case 1:
                printf("Result = %.2f\n", a + b);
                break;

            case 2:
                printf("Result = %.2f\n", a - b);
                break;

            case 3:
                printf("Result = %.2f\n", a * b);
                break;

            case 4:
                printf("Result = %.2f\n", a / b);
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
