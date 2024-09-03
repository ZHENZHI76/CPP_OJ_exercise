#include<iostream>
#include<algorithm>
using namespace std;

struct stu{
    char name[15];
    int c;
    int m;
    int t;
}a[105];

bool cmp(stu a, stu b){
    return a.t > b.t;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].c >> a[i].m;
        a[i].t = a[i].c + a[i].m;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].c << " " << a[i].m << " " << a[i].t << endl;
    }
    return 0;
}