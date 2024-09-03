#include <iostream>
#include <algorithm>
using namespace std;

struct Student {
    int arr;
    int need;
}a[1005];

bool cmp(Student a, Student b) {
    return a.arr < b.arr;
}
Student q[1005];
int front = 0, rear = 0;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i].arr >> a[i].need;
    }
    sort(a + 1, a + n + 1, cmp);
    int end_t = a[1].arr + a[1].need;
    int id = 2;
    int maxlen = 0;
    for (int i = 2; i <= n; ++i) {
        while (id <= n && end_t >= a[id].arr) {
            q[rear++] = a[id];
            id++;
        }
        maxlen = max(maxlen, rear - front);
        if (rear == front) {
            if (id <= n) {
                q[rear++] = a[id];
                end_t = a[id].arr + a[id].need;
                id++;
            }
        } else {
            Student h = q[front++];
            end_t += h.need;
        }
    }
    cout << maxlen << " " << end_t-a[1].arr<< endl;
    return 0;
}