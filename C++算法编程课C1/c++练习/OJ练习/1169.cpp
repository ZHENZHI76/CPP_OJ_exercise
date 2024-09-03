#include<iostream>
#include<string>
using namespace std;

int main() {
    int h, s;
    cin >> h >> s;

    string commands;
    cin >> commands;

    for (int i = 0; i < commands.size(); i++) {
        char command = commands[i];
        if (command == 'u' && s > 0) {
            s--;
        } else if (command == 'd' && s < h) {
            s++;
        }
    }

    cout << s << endl;

    return 0;
}
