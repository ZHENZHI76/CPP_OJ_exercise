#include <iostream>
using namespace std;

int main() {
    int d, D;
    cin >> d >> D;  

    int q = d / D;  
    int r = d % D;  

    cout << q << " " << r << endl;

    return 0;
}
