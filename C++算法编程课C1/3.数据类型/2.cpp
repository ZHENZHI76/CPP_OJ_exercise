#include <iostream>
using namespace std;
int main() {
    int y = 122;
    int dpy = 365;
    int hpd = 24;
    int mph = 60;
    int spm = 60;

    long long ts = (long long) y * dpy * hpd * mph * spm;

    cout << ts << endl;

    return 0;
}

