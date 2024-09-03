#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int tb = a * 10 * 8 + b * 8 + c;

    int boxes = tb / (24 * 10 * 8);
    int rb = tb % (24 * 10 * 8);

    int br = rb / (10 * 8);
    rb = rb % (10 * 8);

    int p = rb / 8;
    rb = rb % 8;

    cout << boxes << endl;
    cout << br << endl;
    cout << p << endl;
    cout << rb << endl;

    return 0;
}