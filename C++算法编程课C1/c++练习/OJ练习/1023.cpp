// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int n, x, y;
//     cin >> n >> x >> y;

//     int ea = ceil(double(y) / x);
//     int ra = max(n - ea, 0);

//     cout << ra << endl;

//     return 0;
// }
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, x, y;
    
    cin >> n >> x >> y;

    int ans = n - ceil(y*1.0 / x);

    //cout << ((n - y / x) + abs(n - y / x)) / 2 << endl;
    cout << (ans + abs(ans)) / 2 << endl;

    return 0;
}



