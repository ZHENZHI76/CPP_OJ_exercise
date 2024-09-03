#include <iostream>
#include <algorithm>
using namespace std;

struct stu {
    int t;
    int id;
} a[1005];

bool cmp(stu a, stu b) {
    if(a.t != b.t)
        return a.t < b.t;
    return a.id < b.id;
}

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> a[i].t;
        a[i].id = i;
    }
    sort(a+1, a+n+1, cmp);
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (n-i) * a[i].t;
        cout << a[i].id << " ";
    }
    cout << endl;
    printf("%.2f", sum*1.0/n);
    return 0;
}