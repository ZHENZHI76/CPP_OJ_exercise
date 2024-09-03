#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    if(a == 28) {
        cout << "在外公家给外公过生日" << endl;
    }
    else if(a % 2 != 0) {
        switch(c) {
            case 0:
                cout << "在图书馆";
                break;
            case 1:
                cout << "在公园";
                break;
            case 2:
                cout << "在家里";
                break;
        }

        if(b == 1 || b == 3 || b == 5 || b == 7) {
            cout << "学习数学" << endl;
        } else {
            cout << "学习编程" << endl;
        }
    } 
    else {
        switch(c) {
            case 0:
                cout << "在体育馆";
                break;
            case 1:
                cout << "在公园";
                break;
            case 2:
                cout << "在家里";
                break;
        }
        if(b == 1 || b == 2 || b == 5 || b == 6) {
            cout << "打乒乓球" << endl;
        } else {
            cout << "做引体向上" << endl;
        }
    }
    return 0;
}
