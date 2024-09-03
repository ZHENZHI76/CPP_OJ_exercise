#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[10005];
    cin.getline(s, 10005);
    int len = 0;
    while (s[len] != '\0') len++;
    s[len] = '+';
    s[len+1] = '\0';
    long long nums[10005], num = 0;
    char ops[10005];
    int top_num = 0, top_op = 0;
    for (int i = 0; i < len + 1; i++) {
        char c = s[i];
        if (c >= '0' && c <= '9') {
            num = num * 10 + c - '0';
        } else {
            while (top_op > 0 && ops[top_op] == '*') {
                num *= nums[top_num];
                top_num--;
                top_op--;
            }
            nums[++top_num] = num;
            ops[++top_op] = c;
            num = 0;
        }
    }
    long long res = 0;
    for (int i = 1; i <= top_num; i++) {
        res += nums[i];
    }
    cout << res % 10000 << endl;
    return 0;
}