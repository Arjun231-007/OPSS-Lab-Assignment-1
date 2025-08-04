#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = (float)sum / n;

    printf("The average is: %.2f\n", average);

    return 0;
}
