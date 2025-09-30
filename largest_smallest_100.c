#include <stdio.h>

int main() {
    int n , largest , smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d", &n);

    largest = n;
    smallest = n;

    for (int i = 2; i <= 100; i++) {
        scanf("%d", &n);

        if (n > largest) {
            largest = n;
        }

        if (n < smallest) {
            smallest = n;
        }
    }

    printf("Largest number = %d\n", largest);
    printf("Smallest number = %d\n", smallest);

    return 0;
}
