#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int a = 1, b = 1;
    for (int i = m + 2; i <= n; i++){
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << b << endl;
}