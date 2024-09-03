#include <iostream>
using namespace std;
int main() {
    cout << 8000 / 3600 << "时" 
         << 8000 % 3600 / 60 << "分" 
         << 8000 % 60 << "秒" << endl;

    return 0;
}
