#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    char a[1005];
    fgets(a, 1005, stdin);

    int count = 0;
    for(int i = 0; a[i] != '\0'; i++) {
        if(a[i] >= '0' && a[i] <= '9') {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}