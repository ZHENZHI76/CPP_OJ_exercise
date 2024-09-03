#include <iostream>
#include <unordered_map>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> points;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        int key = x * 10000 + y;  
        points[key]++;
    }

    int count = 0;
    for (auto it1 = points.begin(); it1 != points.end(); ++it1) {
        int x1 = it1->first / 10000;
        int y1 = it1->first % 10000;

        for (auto it2 = next(it1); it2 != points.end(); ++it2) {
            int x2 = it2->first / 10000;
            int y2 = it2->first % 10000;

            if (x1 != x2 || y1 != y2) {
                int d = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
                int x3 = x1 + (y2 - y1);
                int y3 = y1 - (x2 - x1);
                int x4 = x2 + (y2 - y1);
                int y4 = y2 - (x2 - x1);

                int key3 = x3 * 10000 + y3;
                int key4 = x4 * 10000 + y4;

                if (points.count(key3) && points[key3] >= 1 && points.count(key4) && points[key4] >= 1) {
                    count++;
                }
            }
        }
    }

    cout << count / 2 << endl;

    return 0;
}






