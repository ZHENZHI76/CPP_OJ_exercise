// #include <iostream>
// #include <iomanip>
// #include <cmath>

// using namespace std;

// int main() {
//     double xa, ya;
//     cin >> xa >> ya;
    
//     double xb, yb;
//     cin >> xb >> yb;
    
//     double x_d = xb - xa;
//     double y_d = yb - ya;

//     cout << fixed << setprecision(3) << sqrt(x_d * x_d + y_d * y_d) << endl;

//     return 0;
// }
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    double xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    cout << fixed << setprecision(3) << sqrt(pow(xa - xb, 2) + pow(ya - yb, 2)) << endl;
}
