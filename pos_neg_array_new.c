#include <stdio.h>

int main() {
    int a[10];
    int pos = 0;
    int neg = 0;
    int zero = 0;
    int i;
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &a[10]);
    }
    for(i = 0; i < 10; i++) {
        if(a[10] > 0) {
            pos++;
        }
        else if(a[10] < 0) {
            neg++;
        }
        else {
            zero++;
        }
    }

    printf("\n--- RESULTS ---\n");
    printf("Total Positive elements: %d\n", pos);
    printf("Total Negative elements: %d\n", neg);
    printf("Total Zero elements:     %d\n", zero);

    return 0;
}
