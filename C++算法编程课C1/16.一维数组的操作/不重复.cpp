#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    bool a[n];
    for(int i = 0; i < n; i++) 
        a[i] = false;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if(!a[x]) {
        cout << x << " ";
        a[x] = true; 
        }
    }

    return 0;
}