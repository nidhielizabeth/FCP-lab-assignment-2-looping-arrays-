#include <stdio.h>

int main() {
    int a[10], n, i;
    int max, second_max;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    second_max = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] != max) {
            second_max = a[i];
            break;
        }
    }

    for (i = 0; i < n; i++) {
        if (a[i] > second_max && a[i] != max) {
            second_max = a[i];
        }
    }
    printf("Largest = %d\n", max);
    printf("Second Largest = %d\n", second_max);

    return 0;
}

