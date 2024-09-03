#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if(a > 2 && a % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
