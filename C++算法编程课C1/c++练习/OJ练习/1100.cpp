#include <iostream>
using namespace std;

int main() {
    int cnt = 0;
    int i = 0;
    double a;
    char dna1[505], dna2[505];
    cin >> a >> dna1 >> dna2;
    
    while (dna1[i] != '\0') {
        if (dna1[i] == dna2[i]) {
            cnt++;
        }
        i++;
    }
    if ((double)cnt / i >= a) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}