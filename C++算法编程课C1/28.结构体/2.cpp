#include<iostream>
using namespace std;

struct stu{
    char name[105];
    int h;
    int id;
}a[105], ms;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].h >> a[i].id;
        if(a[i].h > ms.h || (a[i].h == ms.h && a[i].id > ms.id)){
            ms = a[i];
        }
    }
    cout << ms.name << " " << ms.h << " " << ms.id << endl;
    return 0;
}