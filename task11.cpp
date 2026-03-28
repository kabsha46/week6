#include <stdio.h>

int main() {
    int n;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    int arr[n];
    int count = 0;

    printf("Enter numbers:\n");

    while (count < n) {
        int num;
        printf("Enter number %d: ", count + 1);
        scanf("%d", &num);

        // Check if number already exists in array
        int found = 0;
        for (int i = 0; i < count; i++) {
            if (arr[i] == num) {
                found = 1;
                break;
            }
        }

        if (found) {
            printf("Already Entered\n");
        } else {
            arr[count] = num;
            count++;
        }
    }

    // Print the final array
    printf("\nArray: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

}