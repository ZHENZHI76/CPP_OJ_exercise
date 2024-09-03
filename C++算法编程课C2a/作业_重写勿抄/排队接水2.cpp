#include<iostream>
#include<algorithm>
using namespace std;

struct stu {
    int arr; //到达时间
    int need; //需要接水的时间
} a[1005];

bool cmp(stu a, stu b) {
    return a.arr < b.arr; //按到达时间升序
}

stu q[1005];
int front, rear;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i].arr >> a[i].need;
    }
    sort(a+1, a+n+1, cmp);
    int end_t = a[1].arr + a[1].need;
    int id = 2;
    int maxlen = 0;
    for (int i=2; i<=n; i++) {
        while(id<=n && end_t>a[id].arr) {
            q[rear++] = a[id];
            id++;
            maxlen = max(maxlen, rear-front);
        }
        if(front==rear) {
            q[rear++] = a[id];
            id++;
        }
        stu h = q[front++];
        if(end_t > h.arr) {
            end_t = end_t + h.need;
        } else {
            end_t = h.arr + h.need;
        }
    }
    cout << maxlen << " " << end_t-a[1].arr;
    return 0;
}