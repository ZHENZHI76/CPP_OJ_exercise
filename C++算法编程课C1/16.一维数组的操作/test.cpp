#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    int pos, val;
    cin >> pos >> val;

    for(int i = n - 1; i >= pos - 1; i--)
        a[i + 1] = a[i];

    a[pos - 1] = val;
    n++;

    for(int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}