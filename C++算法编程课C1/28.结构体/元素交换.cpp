#include<iostream>
#include<algorithm>
using namespace std;

struct stu{
    char name[105];
    int h;
    int id;
}a[105];

bool cmp(stu a, stu b){
    if(a.h != b.h) return a.h > b.h;
    else return a.id > b.id;
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].h >> a[i].id;
    }
    sort(a, a + n, cmp);
    cout << a[0].name << " " << a[0].h << " " << a[0].id << endl;
    return 0;
}