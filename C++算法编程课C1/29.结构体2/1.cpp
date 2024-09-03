#include <iostream>
using namespace std;

struct people {
    int age;
    char tel[13];
    void input() {
        cin >> age;
        cin >> tel;
    }
    void output() {
        cout << age << endl;
        cout << tel << endl;
    }
};

int main() {
    people a;
    a.input();
    a.output();
    return 0;
}