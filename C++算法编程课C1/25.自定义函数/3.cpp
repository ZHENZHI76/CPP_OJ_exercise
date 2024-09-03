#include <iostream>
using namespace std;

void f(int b[], int a, int c, int d) {
    for(int i = 0; i < 10; i++) {
        b[i]++;
    }
    a++;
    c++;
    d++;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    f(a, a[0], a[1], a[2]);
    for(int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    return 0;
}