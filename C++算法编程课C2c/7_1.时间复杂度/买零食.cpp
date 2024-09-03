#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int best_a = 0, best_b = 0, best_c = 0;
    int max_min = 0;
    int max_sum = 0;
    
    for (int a = 0; a <= n / 3; a++) {
        for (int b = 0; b <= (n - 3*a) / 8; b++) {
            int c = (n - 3*a - 8*b) / 11;
            if (3*a + 8*b + 11*c == n) {
                int min_value = min(min(a, b), c);
                int sum = a + b + c;
                if (min_value > max_min || (min_value == max_min && sum > max_sum)) {
                    max_min = min_value;
                    max_sum = sum;
                    best_a = a;
                    best_b = b;
                    best_c = c;
                }
            }
        }
    }
    
    if (max_min == 0) {
        cout << -1 << endl;
    } else {
        cout << best_a << " " << best_b << " " << best_c << endl;
    }
    
    return 0;
}
