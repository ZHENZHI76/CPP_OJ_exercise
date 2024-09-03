#include<iostream>
#include<algorithm>
using namespace std;

struct stu{
    string name;
    int m;
    int d;
}a[185];

bool cmp(stu a, stu b){
    if(a.m != b.m) return a.m < b.m;
    else if(a.d != b.d) return a.d < b.d;
    else if(a.name.size() != b.name.size()) return a.name.size() < b.name.size();
    else return a.name < b.name;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].m >> a[i].d;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        int j = i;
        while(j < n && a[j].m == a[i].m && a[j].d == a[i].d) j++;
        if(j - i > 1){
            cout << a[i].m << " " << a[i].d << " ";
            for(int k = i; k < j; k++){
                cout << a[k].name << " ";
            }
            cout << endl;
        }
        i = j - 1;
    }
    return 0;
}