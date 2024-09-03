#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a1[1000], a2[1000];
    for(int i = 0; i < n; i++) {
        cin >> a1[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> a2[i];
    }
    for(int i = 0; i < n; i++) {
        cout << a1[i] + a2[i] << " ";
    }
    cout << endl;
    return 0;
}