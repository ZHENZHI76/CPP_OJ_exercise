#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    char a;
    cin >> n1 >> n2 >> a;

    int r;

    switch (a) {
        case '+':
            r = n1 + n2;
            break;
        case '-':
            r = n1 - n2;
            break;
        case '*':
            r = n1 * n2;
            break;
        case '/':
            if (n2 == 0) {
                cout << "Divided by zero!" << endl;
                return 0;
            }
            r = n1 / n2;
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 0;
    }

    cout << r << endl;

    return 0;
}
