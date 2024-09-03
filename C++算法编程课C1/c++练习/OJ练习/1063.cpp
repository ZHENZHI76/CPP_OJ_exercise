#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int num = 1;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++;
            if (num == 10) num = 0;
        }
        cout << endl;
    }
    return 0;
}