#include <stdio.h>

int main() {
    float total_due;
    int change[4]; // quarters, dimes, nickels, pennies

    printf("Enter total due (in dollars): ");
    scanf("%f", &total_due);

    printf("Enter your change (quarters dimes nickels pennies): ");
    scanf("%d %d %d %d", &change[0], &change[1], &change[2], &change[3]);

    // Convert total_due to cents to avoid floating point issues
    int total_cents = (int)(total_due * 100 + 0.5);

    // Calculate total change in cents
    int total_change = change[0] * 25
                     + change[1] * 10
                     + change[2] *  5
                     + change[3] *  1;

    printf("\n--- Summary ---\n");
    printf("Total Due:    %d cents\n", total_cents);
    printf("Your Change:  %d cents\n", total_change);

    if (total_change >= total_cents) {
        printf("Result: You CAN pay the bill!\n");
        printf("Change back: %d cents\n", total_change - total_cents);
    } else {
        printf("Result: You CANNOT pay the bill.\n");
        printf("Short by: %d cents\n", total_cents - total_change);
    }
}