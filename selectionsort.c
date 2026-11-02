#include <stdio.h>

int main() {
    int a[5];
    int i, j, min_index, temp;

    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5 - 1; i++) {
        min_index = i;
        for (j = i + 1; j < 5; j++) {
            if (a[j] < a[min_index]) {
                min_index = j;
            }
        }
        temp = a[i];
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
