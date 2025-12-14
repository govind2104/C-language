#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    int min = arr[0];
    int max = arr[0];

    int *p = arr;
    
    for (int i = 1; i < n; i++, p++) {
        int val = *p;     
        if (val < min) min = val;
        if (val > max) max = val;
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);
    return 0;
}
