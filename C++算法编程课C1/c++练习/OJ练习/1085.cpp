#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int nums[105];

    for (int i = 0; i < N; ++i) {
        cin >> nums[i];
    }

    int max = nums[0];
    for (int i = 1; i < N; ++i) {
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < N; ++i) {
        if (nums[i] != max) {
            sum += nums[i];
        }
    }

    cout << sum << endl;

    return 0;
}





