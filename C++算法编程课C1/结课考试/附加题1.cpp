#include <iostream>
using namespace std;

int a[300];

int f(int n) {

    if(n < 3) return 1;
    if (a[n] != 0) return a[n];

    int sum = 1;
    for(int i = n * 2/3; i >= 1; i--) {
        sum += f(i);
    }
    a[n] = sum;
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) - 1 << endl;
    return 0;
}