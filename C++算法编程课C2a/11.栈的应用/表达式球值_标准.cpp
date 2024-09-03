#include<iostream>
using namespace std;

int s[1000005], top = 0;

int main() {
    char op;
    int n;
    cin >> n;
    s[++top] = n % 10000;
    while(cin >> op >> n) {
        n %= 10000;
        if(op == '+') {
            s[++top] = n;
        } else if(op == '*') {
            s[top] = s[top] * n % 10000;
        }
    }
    int sum = 0;
    while(top > 0) {
        sum = (sum + s[top--]) % 10000;
    }
    cout << sum;
    return 0;
}