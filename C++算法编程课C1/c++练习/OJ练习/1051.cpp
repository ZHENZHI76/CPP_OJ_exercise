#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    double total_time = 0;

    for (int i = 0; i < n; i++) {
        double x, y;
        int people;
        cin >> x >> y >> people;

        double distance = sqrt(x * x + y * y);
        double time_to_roof = distance / 50;
        double time_for_rescue = time_to_roof * 2 + people * 1.5;

        total_time += time_for_rescue;
    }

    cout << ceil(total_time) << endl;
    return 0;
}

