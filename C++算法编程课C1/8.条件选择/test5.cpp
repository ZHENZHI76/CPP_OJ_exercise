#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    switch (a)
    {
        case 1:
            cout << "星期一" << endl;
            break;
        case 2:
            cout << "星期二" << endl;
            break;
        case 3:
            cout << "星期三" << endl;
            break;
        case 4:
            cout << "星期四" << endl;
            break;
        case 5:
            cout << "星期五" << endl;
            break;
        default:
            cout << "周末" << endl;
            break;
    }
            

}