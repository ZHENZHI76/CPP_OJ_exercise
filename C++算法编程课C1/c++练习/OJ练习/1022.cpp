#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x,y,n;
	cin>>n>>x>>y;
	cout << n-ceil(y*1.0/x) << endl;
	return 0;
}

