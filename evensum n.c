#include <stdio.h>

int main() {
    int n, i;

    printf("Enter how many even numbers you want : ");
    scanf("%d", &n)

    for(i = 1; i <= n; i++) {
        printf("%d ", 2*i);  
    }

    return 0;               //output is based on user input 2,4,6,....n
}
