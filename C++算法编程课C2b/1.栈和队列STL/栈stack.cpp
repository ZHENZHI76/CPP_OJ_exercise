#include<iostream>
#include<stack>
using namespace std;

stack<int> s1;
stack<int> s2;

int main() {
    int n;
    cin >> n;

    int op, num, id=1;
    while(cin >> op >> num) {
        if(op == 1) {
            for(int i=1; i<=num; i++) {
                s1.push(id++);
            }
        } else {
            for(int i=1; i<=num; i++) {
                s2.push(s1.top());
                s1.pop();
            }
        }
    }

    while(!s2.empty()) {
        cout << s2.top() << endl;
        s2.pop();
    }

    return 0;
}