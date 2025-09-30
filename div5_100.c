#include <stdio.h>

int main() {

    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            printf("%d\n", i);
        }
    }                                      //output = 5,10,15,30,35,........,100

    return 0;
}
