#include<iostream>
#include<set>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<int> numbers;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        numbers.insert(num);
    }

    cout << numbers.size() << endl;
    for (set<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

