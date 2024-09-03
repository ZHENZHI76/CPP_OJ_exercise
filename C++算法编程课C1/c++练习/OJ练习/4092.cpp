#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ppb = 24 * 10 * 8;

    int tp = ppb * n;

    int ppm = tp / 2;

    int tfp = ppm / 8 * 3;
    int tfb = ppm / 8 / 10 * 5;
    int tfc = ppm / 8 / 10 / 24 * 7;

    int ts = tfp + tfb + tfc;

    int hours = ts / 3600;
    int rs = ts % 3600;
    int minutes = rs / 60;
    int seconds = rs % 60;

    cout << hours << "小时" << minutes << "分钟" << seconds << "秒" << endl;

    return 0;
}