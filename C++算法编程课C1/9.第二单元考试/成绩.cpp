#include <iostream>
using namespace std;

int main() {
    int s;
    cin >> s;

    if (s >= 90) {
        cout << "excellent" << endl;
    }
    else if (s >= 80) {
        cout << "good" << endl;
    }
    else if (s >= 70) {
        cout << "secondary" << endl;
    }
    else if (s >= 60) {
        cout << "pass" << endl;
    }
    else {
        cout << "fail" << endl;
    }

    return 0;
}
