#include<iostream>
using namespace std;

int s[260], top=0;

int main(){
    int n;
    cin >> n;
    for(int k=1; k<=n; ++k){
        char a[260];
        cin >> a;
        bool flag = false;
        top = 0;
        for(int i=0; a[i]; ++i){
            int c=0;
            switch(a[i]){
                case '{': c=1; break;
                case '[': c=2; break;
                case '(': c=3; break;
                case '<': c=4; break;
                case '>': c=-4; break;
                case ')': c=-3; break;
                case ']': c=-2; break;
                case '}': c=-1; break;
            }
            if(c>0){
                if(c>=s[top]){
                    s[++top] = c;
                } else {
                    flag = true;
                    break;
                }
            } else {
                if(s[top]+c==0){
                    --top;
                } else {
                    flag = true;
                    break;
                }
            }
        }
        if(top==0 && !flag){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}