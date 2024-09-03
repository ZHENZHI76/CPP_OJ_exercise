#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double pi = 3.1415926,r,d,l,s;
    cin>>r;
    d=2*r;
    l=pi*d;
    s=pi*r*r;
    cout<<fixed<< setprecision(4) <<d<<l<<s<<endl;
    return 0;
}