#include<iostream>
#include<cstring>
using namespace std;

char s1[1005], s2[1005];
int a[1005], len_a;
int b[1005], len_b;
int result[2005], len_result;

int main() {
    cin >> s1 >> s2;
    len_a = strlen(s1);
    len_b = strlen(s2);

    for(int i = 0; i < len_a; i++) {
        a[len_a - i - 1] = s1[i] - '0';
    }

    for(int i = 0; i < len_b; i++) {
        b[len_b - i - 1] = s2[i] - '0';
    }

    for(int i = 0; i < len_a; i++) {
        for(int j = 0; j < len_b; j++) {
            result[i + j] += a[i] * b[j];
        }
    }

    for(int i = 0; i < len_a + len_b; i++) {
        if(result[i] >= 10) {
            result[i + 1] += result[i] / 10;
            result[i] %= 10;
        }
    }

    len_result = len_a + len_b;
    while(result[len_result - 1] == 0 && len_result > 1) {
        len_result--;
    }

    for(int i = len_result - 1; i >= 0; i--) {
        cout << result[i];
    }

    cout << endl;

    return 0;
}