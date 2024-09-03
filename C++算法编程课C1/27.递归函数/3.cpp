#include <cstdio>
#include <cmath>

int f(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return f(b, a % b);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", f(a, b));
    return 0;
}