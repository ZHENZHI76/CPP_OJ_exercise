#include<iostream>
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    int r = 1 + n + n*(n-1)/2 - (p-1)*(p-2)/2;
    cout << r << endl;
    return 0;
}