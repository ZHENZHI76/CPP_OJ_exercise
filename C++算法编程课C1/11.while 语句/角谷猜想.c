#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", N);
    while (N != 1) {
        if (N % 2 == 1) {
            N = 3 * N + 1;
        } else {
            N = N / 2;
        }
        printf("%d\n", N);
    }
    printf("End\n");
    return 0;
}