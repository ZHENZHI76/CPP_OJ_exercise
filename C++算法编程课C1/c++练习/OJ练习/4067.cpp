#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;

    bool Or = (n < a || n > b) && (n < c || n > d);

    cout << Or;
    return 0;
}