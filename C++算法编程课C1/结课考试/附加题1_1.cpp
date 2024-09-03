#include <iostream>
using namespace std;

int f(int n) {
    if(n < 3) return 1;
    int sum = 1;
    for(int i = n * 2 / 3; i >= 1; i--) {
        sum += f(i);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}
