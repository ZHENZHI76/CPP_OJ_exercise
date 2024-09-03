#include<iostream>
#include<cstring>
using namespace std;

char s1[1005], s2[1005];
int a[1005], len_a;
int b[1005], len_b;
int result[1005], len_result;
bool cmp() {
    if(len_a != len_b) {
        return len_a > len_b;
    }
    for(int i = len_a - 1; i >= 0; i--) {
        if(a[i] != b[i]) {
            return a[i] > b[i];
        }
    }
    return true;
}

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

    bool flag = 0;
    if(!cmp()) {
        swap(a, b);
        swap(len_a, len_b);
        cout << "-";
        flag == 1;
    }

    len_result = max(len_a, len_b);
    for(int i = 0; i < len_result; i++) {
        if(a[i] < b[i]) {
            a[i+1]--;
            a[i] += 10;
        }
        result[i] = a[i] - b[i];
    }

    while(len_result > 1 && result[len_result - 1] == 0) {
        len_result--;
    }
    for(int i = len_result - 1; i >= 0; i--) {
        cout << result[i];
    }
    
    if (flag == 1){
    swap(a, b);
    swap(len_a, len_b);
    }

    return 0;
}