#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // 每一箱的橡皮擦数量
    int pieces_per_box = 24 * 10 * 8;

    // 两台机器需要处理的橡皮擦总数量
    int total_pieces = pieces_per_box * n;

    // 每台机器需要处理的橡皮擦数量
    int pieces_per_machine = total_pieces / 2;

    // 计算每台机器打包一箱橡皮擦需要的时间
    double time_for_packs = pieces_per_machine / 8.0 * 3;
    double time_for_boxes = pieces_per_machine / 8.0 / 10 * 5;
    double time_for_carton = pieces_per_machine / 8.0 / 10 / 24 * 7;

    // 计算总时间（以秒为单位）
    double total_seconds = time_for_packs + time_for_boxes + time_for_carton;

    // 将时间转换为小时，分钟和秒
    int hours = total_seconds / 3600;
    int remaining_seconds = (int)total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;

    // 输出结果
    cout << hours << "小时" << minutes << "分钟" << seconds << "秒" << endl;

    return 0;
}