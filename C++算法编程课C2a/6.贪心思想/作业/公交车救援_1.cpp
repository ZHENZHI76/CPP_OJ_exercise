#include <iostream>
#include <algorithm>

using namespace std;

long long a, n, w[30005];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    // int a, n;
    cin >> a >> n;
    // int w[30005];
    int w[n];
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }

    sort(w, w + n, cmp);

    int l = 0; //r = n - 1;
    int b = 0;
    for (int i = 0; i < l; i++) {
        if (l + w[i] <= a) {
            l += w[i];
        } else {
            l = w[i];
            b++;
        }
    }
    /*
    while (l <= r) {
        if(l == r) {
            b++;
            break; 
        }
        
        if(w[l] + w[r] <= a) {
            l++;
            // r--;
        }
        else {
            r--;  
        }
        r--;
        b++;
        */
    
    cout << b << endl;

    return 0;
        
}