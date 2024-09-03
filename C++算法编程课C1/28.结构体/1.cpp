#include <iostream>
#include <iomanip>
using namespace std;

struct Student {
    char name[25];
    // string name;
    char g;
    int age;
    double weight;
};

int main() {
    Student s;
    cin >> s.name >> s.g >> s.age >> s.weight;
    cout << fixed << setprecision(1);
    cout << s.name << " " << s.g<< " " << s.age << " " << s.weight << endl;
    return 0;
}