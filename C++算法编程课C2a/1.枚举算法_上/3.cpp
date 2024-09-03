#include <iostream>

using namespace std;

int stick[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int f(int num) {
    if (num == 0) {
        return stick[0];
    }
    int total = 0;
    while (num) {
        total += stick[num % 10];
        num /= 10;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int a = 0; a <= 1111; a++) {
        for (int b = 0; b <= 1111; b++) {
            int c = a + b;
            if (f(a) + f(b) + f(c) == n - 4) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

