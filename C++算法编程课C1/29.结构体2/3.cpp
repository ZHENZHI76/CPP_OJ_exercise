#include<iostream>
using namespace std;

int main() {
    int a=2;
    switch(a){
        case 1: 
            cout << 1 << " ";
        case 2: 
            cout << 2 << " ";
        case 3: 
            cout << 3 << " ";
            break;
        default: 
            cout << 4 << " ";
    }
    return 0;
}