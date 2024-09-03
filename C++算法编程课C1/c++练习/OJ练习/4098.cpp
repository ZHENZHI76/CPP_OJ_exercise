#include <iostream>
using namespace std;

int main() {
    int d;
    cin >> d;
    switch (d) {
        case 1:
            cout << "语文" << endl;
            break;
        case 2:
        case 3:
            cout << "英语" << endl;
            break;
        case 4:
        case 5:
        case 6:
            cout << "数学" << endl;
            break;
        case 7:
            cout << "编程" << endl;
            break;
        default:
            break;
    }
    return 0;
}