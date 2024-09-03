#include <iostream>
using namespace std;

int f1();

void f2() {
    cout << 1;
    f1();
}

void f1() {
    cout << 2;
    f2();
}

int main() {
    f1();
    return 0;
}