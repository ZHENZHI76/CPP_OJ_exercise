#include<iostream>
#include<iomanip>
#include<algorithm>
#define MAXN 1005 
using namespace std;
struct paidui{
	int value;
	int p;
};
paidui a[MAXN];
bool cmp(const paidui &a, const paidui &b)
{
	if(a.value == b.value)//时间相同，先来的先排序 
		return a.p < b.p;
	else
		return a.value < b.value;//否则按照花费时间从小到大排序 
}
int main()
{
	int n;
	cin >> n;
	for(int i = 1; i <=n; ++i)
	{
		cin >> a[i].value;
		a[i].p = i;
	}
	sort(a+1,a+1+n,cmp);
	double sum=0;//必须用double
	for(int i = 1; i <= n; ++i)
	{
		cout << a[i].p << " ";
		sum += (n-i)*a[i].value; 
		//cout << "sum = " << sum << endl;
	}
	cout << endl;
	cout << fixed << setprecision(2) << sum/n << endl;
	return 0; 
} 

