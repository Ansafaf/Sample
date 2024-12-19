#include <stdio.h>

int main() {
    int n;
    float arr[10], sum = 0.0, average;

    printf("Enter the number of elements (n < 10): ");
    scanf("%d", &n);

    if (n >= 10) {
        printf("Error: n should be less than 10.\n");
        return 1;
    }

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("The average of the entered numbers is: %.2f\n", average);

    return 0;
}
