#include <iostream>

using namespace std;

int bs(int arr[], int size, int t) {
    int l = 0, r = size - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == t) {
            return mid + 1;
        } else if (arr[mid] < t) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    
    int wN[105];
    for (int i = 0; i < n; i++) {
        cin >> wN[i];
    }
    
    int win;
    cin >> win;
    
    int result = bs(wN, n, win);
    cout << result << endl;
    
    return 0;
}