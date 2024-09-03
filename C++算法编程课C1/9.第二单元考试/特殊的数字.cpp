// #include <iostream>
// using namespace std;

// int main() {
//     int x;
//     cin >> x;

//     switch ((x > 10 && x < 66) * 2 + (x % 2 == 0)) {
//         case 3:
//             cout << "1 1 0 0" << endl;
//             break;
//         case 1:
//         case 2:
//             cout << "0 1 1 0" << endl;
//             break;
//         default:
//             cout << "0 0 0 1" << endl;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    if (x % 2 == 0 && x > 10 && x < 66) {
        cout << "1 1 0 0" << endl;
    }
    else if (x % 2 == 0 || (x > 10 && x < 66)) {
        cout << "0 1 1 0" << endl;
    }
    else {
        cout << "0 0 0 1" << endl;
    }

    return 0;
}

