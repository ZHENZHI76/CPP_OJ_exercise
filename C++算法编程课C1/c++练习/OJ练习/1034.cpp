#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;

    // if (d == 1 || d == 3 || d == 5) {
    //     cout << "NO" << endl;
    // } else {
    //     cout << "YES" << endl;
    // }
    switch (d){
        case 1:
        case 3:
        case 5:
            cout << "NO" << endl;
            break;
        default:
            cout << "YES" << endl;
            break;
    }

    return 0;
}
