#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    int x,a,y,b;
    double s;	 
	cin>>x>>a>>y>>b;
	s=(b*y-a*x)*1.0/(b-a); 
	//double s;
	cout<< fixed << setprecision(2)<<s<<endl;
	return 0;
}