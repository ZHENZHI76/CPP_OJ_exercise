#include <iostream>
#include <cstring>
using namespace std;

char s1[1005];
int a[1005], len_a;
int b;
int ans[1005], len_ans;

int main() {
    cin >> s1 >> b;
    len_a = strlen(s1);
    for(int i = 0; i < len_a; i++) {
        a[len_a - i - 1] = s1[i] - '0';
    }

    if(b == 0) {
        cout << "除数不能为0" << endl;
        return 0;
    }
    int reminder = 0;
    for(int i = len_a - 1; i >= 0; i--) {
		/*
        reminder = reminder * 10 + a[i];
        ans[i] = reminder / b;
        reminder %= b;
		*/
		ans[i] = (reminder * 10 + a[i]) / b;
    	reminder = (reminder * 10 + a[i]) % b;
    }

    len_ans = len_a;
    while(ans[len_ans - 1] == 0 && len_ans > 1) {
        len_ans--;
    }
    for(int i = len_ans - 1; i >= 0; i--) {
        cout << ans[i];
    }
	if(reminder) cout<<"余"<<reminder<<endl;
    return 0;
}