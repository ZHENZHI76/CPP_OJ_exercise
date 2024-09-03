#include<iostream>
using namespace std;
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    a = a / 3;
    e = e + a;
    b = (b + a) / 3;
    a = a + b;
    c = (c + b) / 3;
    b = b + c;
    d = (d + c) / 3;
    c = c + d;
    e = (e + d) / 3;
    d = d + e;
    a = a + e;
    cout << a <<" " << b <<" " << c<<" " << d <<" " << e<<endl;
    return 0;
}
