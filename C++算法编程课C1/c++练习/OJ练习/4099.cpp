#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int w, d1, d2;
    cin >> w >> d1 >> d2;
	double a = 90, b = 50;

    switch (w) {
    case 1:a = a * 0.6;b = b * 0.6;
        break;
    case 2:a = a * 0.4;b = b * 0.4;
        break;
    case 3:a = a * 0.3;b = b * 0.3;
        break;
}

    double t1 = d1 / b;
    double t2 = d2 / a;
	double r1 = 0, r2 = 0;
    
    if(t1 >= 4)
        r1 = (int)(t1 / 4) * 0.5;
    if(t2 >= 4)
        r2 = (int)(t2 / 4) * 0.5;

    t1 += r1;
    t2 += r2;

    double mt;

    if(t1 < t2)
        mt = t1;
    else
        mt = t2;

    cout << fixed << setprecision(2) << mt;

    return 0;
}