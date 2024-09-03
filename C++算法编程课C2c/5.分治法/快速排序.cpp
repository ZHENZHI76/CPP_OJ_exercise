#include <iostream>
using namespace std;

int arr[7] = {3, 1, 4, 1, 5, 9, 2};

void quickSort(int left, int right) {
    int i = left, j = right;
    int mid = arr[(left + right) / 2]; // 中间值

    while (i <= j) {
        while (arr[i] < mid) i++;
        while (arr[j] > mid) j--;
        if (i <= j) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (left < j) quickSort(left, j);
    if (i < right) quickSort(i, right);
}

int main() {
    int n = 7; // 手动指定数组长度

    quickSort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}