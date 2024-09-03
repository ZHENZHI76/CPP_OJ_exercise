#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int x,a,y,b;	 
	cin>>x>>a>>y>>b;
  	cout<< fixed << setprecision(2);
	double s; 
    s = (b*y-a*x)/(b-a);
    cout << s;
	return 0;
}
