#include<iostream>
#include<cstring>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int k = n - m + 1;
    int a[1005] = {1}, len_a = 1;
    int b[1005] = {1}, len_b = 1;
    int num[1005] = {0}, len_num = 1;

    for(int i = 3; i <= k; i++) {
        memset(num, 0, sizeof(num));
        len_num = max(len_a, len_b);
        for(int j = 0; j < len_num; j++) {
            num[j] += a[j] + b[j];
            if(num[j] >= 10) {
                num[j + 1]++;
                num[j] -= 10;
            }
        }
        if(num[len_num] > 0) {
            len_num++;
        }

        len_a = len_b;
        for(int j = 0; j < len_b; j++) {
            a[j] = b[j];
        }

        len_b = len_num;
        for(int j = 0; j < len_num; j++) {
            b[j] = num[j];
        }
    }

    for(int i = len_num - 1; i >= 0; i--) {
        cout << num[i];
    }
    cout << endl;

    return 0;
}