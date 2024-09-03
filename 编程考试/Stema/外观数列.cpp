#include <iostream>
#include <cstdio>

char s[2][5000];

void countAndSay(int x, int n) {
    int cur = 0;
    s[cur][0] = x + '0';
    s[cur][1] = '\0';
    for (int i = 1; i < n; ++i) {
        int next = 1 - cur;
        int j = 0, k = 0;
        while (s[cur][j]) {
            int count = 1;
            while (s[cur][j] == s[cur][j + 1]) {
                ++count;
                ++j;
            }
            s[next][k++] = count + '0';
            s[next][k++] = s[cur][j];
            ++j;
        }
        s[next][k] = '\0';
        cur = next;
    }
    printf("%s\n", s[cur]);
}

int main() {
    int x, n;
    scanf("%d%d", &x, &n);
    countAndSay(x, n);
    return 0;
}