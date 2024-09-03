#include<iostream>
using namespace std;

int main() {
    char c;
    int sum = 0;
    while((c = getchar()) != EOF) {
        if(c == '\n') {
            break;
        }
        if(c % 2 != 0 && c % 3 == 0) {
            sum += c;
        }
    }
    cout << sum << endl;
    return 0;
}