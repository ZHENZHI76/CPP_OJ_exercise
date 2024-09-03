// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main() {
//     double x1, y1, x2, y2, x3, y3;
    
//     cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
//     double a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
//     double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
//     double c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    
//     double s = (a + b + c) / 2.0;
    
//     double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
//     cout << fixed << setprecision(2) << area << endl;

//     return 0;
// }
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    double a = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    double c = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double s = (a + b + c) / 2.0;

    cout << fixed << setprecision(2) << sqrt(s * (s - a) * (s - b) * (s - c)) << endl;

    return 0;
}

