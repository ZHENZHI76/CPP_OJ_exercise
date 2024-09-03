#include<iostream>
#include<iomanip>
using namespace std;

struct rongye {
    long long v;
    double c;
} s[10005];

int top = 0;

int main() {
    cin >> s[0].v >> s[0].c;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        char op;
        cin >> op;
        if (op == 'P') {
            long long v;
            double c;
            cin >> v >> c;
            int new_v = s[top].v + v;
            double new_c = (s[top].v * s[top].c + v * c) / new_v;
            s[++top] = {new_v, new_c};
        } else if (op == 'Z' && top > 0) {
            top--;
        }
        printf("%lld %.5lf\n", s[top].v, s[top].c);
        // cout << s[top].v << " " << fixed << setprecision(5) << s[top].c << endl;
    }
    return 0;
}