#include<iostream>
#include<cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long maxn = -1;
    long long t = n;
    while(n) {
        maxn = max(maxn, (n % 10));
        n /= 10;
    }
    int base = maxn + 1;
    long long num = 0;
    int i = 0;
    while(t) {
        num += (t % 10) * pow(base, i);
        i++;
        t /= 10;
    }
    cout << num << endl;
    return 0;
}