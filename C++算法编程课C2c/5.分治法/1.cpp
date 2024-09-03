#include <iostream>
using namespace std;

int a[10] = {0, 1, 2, 4, 5, 7, 8, 9, 10};

int bin_search(int le, int ri, int x) {
    while (le <= ri) {
        int mid = (le + ri) / 2;
        if (a[mid] == x) {
            return mid;
        }
        if (a[mid] > x) {
            ri = mid - 1;
        } else {
            le = mid + 1;
        }
    }
    return -1; // 如果未找到目标值，返回 -1
}

int main() {
    int target = 7;
    int result = bin_search(0, 8, target); // 数组大小为9，索引范围为0到8

    if (result != -1) {
        cout << "元素在索引 " << result << " 处找到。" << endl;
    } else {
        cout << "元素未找到。" << endl;
    }

    return 0;
}