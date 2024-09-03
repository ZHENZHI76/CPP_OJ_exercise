#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int min = 10000;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a < min) {
            min = a;
        }
    }
    cout << min << endl;
    return 0;
}