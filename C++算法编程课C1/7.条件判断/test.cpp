// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     cin >> a;
//     if (a < 0) {
//         cout << "注意负数！" << endl;
//     }
//     cout << a << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int p;
//     if (n <= 8) {
//         p = 300 * n;
//     } else {
//         p = 280 * n;
//     }
//     cout << p << endl;
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     if (n <= 8) {
//         cout << 300 * n << endl;
//     } else {
//         cout << 280 * n << endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cin >> N;
    
//     if (N > 0) {
//         cout << "positive" << endl;
//     } else if (N == 0) {
//         cout << "zero" << endl;
//     } else {
//         cout << "negative" << endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int N;
//     cin >> N;

//     if (N > 0) {
//         cout << "positive" << endl;
//         return 0;
//     } 

//     if (N == 0) {
//         cout << "zero" << endl;
//         return 0;
//     } 

//     if (N < 0) {
//         cout << "negative" << endl;
//         return 0;
//     } 

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     if (n % 2 == 0) {
//         cout << "even";
//     } else {
//         cout << "odd";
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     char c;
//     cin >> c;

//     if (c % 2 != 0) {
//         cout << "YES" << endl;
//     } 
//     else {
//         cout << "NO" << endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int d;
//     cin >> d;

//     double tw = d / 1.2;
//     double tb = d / 3.0 + 50;

//     if(tw < tb)
//         cout << "Walk" << endl;
//     else if(tw > tb)
//         cout << "Bike" << endl;
//     else
//         cout << "All" << endl;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cin >> num;

//     bool d3 = (num % 3 == 0);
//     bool d5 = (num % 5 == 0);
//     bool d7 = (num % 7 == 0);

//     if(d3 && d5 && d7)
//         cout << "3 5 7" << endl;
//     else if(d3 && d5)
//         cout << "3 5" << endl;
//     else if(d3 && d7)
//         cout << "3 7" << endl;
//     else if(d5 && d7)
//         cout << "5 7" << endl;
//     else if(d3)
//         cout << "3" << endl;
//     else if(d5)
//         cout << "5" << endl;
//     else if(d7)
//         cout << "7" << endl;
//     else
//         cout << 'n' << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    int r = (num % 3 == 0) << 2 || (num % 5 == 0) << 1 || (num % 7 == 0);
    
    if(r == 0) cout << "n";
    if(r & 4) cout << "3 ";
    if(r & 2) cout << "5 ";
    if(r & 1) cout << "7";
    cout << endl;

    return 0;
}




