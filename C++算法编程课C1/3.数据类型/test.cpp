#include <iostream>
using namespace std;

int main() {
    char firstInitial = 'Z';
    char secondInitial = 'S';

    int firstAscii = static_cast<int>(firstInitial);
    int secondAscii = static_cast<int>(secondInitial);

    cout << "首字母缩写的ASCII码为: " << firstAscii << " " << secondAscii << endl;

    return 0;
}




