#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    char s[2000000];
    for (int i = 0; i < N; i++) {
        cin >> s[i];
    }

    long long C = 0, CO = 0, COW = 0;
    for (int i = 0; i < N; i++) {
        if (s[i] == 'C') {
            C++;
        } else if (s[i] == 'O') {
            CO += C;
        } else if (s[i] == 'W') {
            COW += CO;
        }
    }

    cout << COW << endl;

    return 0;
}