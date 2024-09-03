#include<iostream>
using namespace std;

struct hw{
    int h,m,s;
    int sum;

    void input(){
        cin >> h >> m >> s;
        sum += h * 3600 + m * 60 + s;
    }

    void output(){
        cout << sum / 3600 << "hour" << endl;    
        cout << (sum % 3600) / 60 << "minute" << endl;    
        cout << sum % 60 << "second" << endl;    
    }
};

int main(){
    int n;
    hw a;
    a.sum = 0;
    cin >> n;
    for(int i=1;i<=n;i++){
        a.input();
    }
    a.output();

    return 0;
}