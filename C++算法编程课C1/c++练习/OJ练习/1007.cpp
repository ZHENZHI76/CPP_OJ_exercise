//#include<iostream> 
//#include<iomanip>
//using namespace std;
//int main(){
//	double a,b,c;
//	cin>>a>>b;
//	c=1.0*(b/a)*100;
//	cout << fixed << setprecision(3) << c << "%" << endl;
//	return 0;
//}
#include<iostream> 
#include<iomanip>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b;
	//c=1.0*(b/a)*100;
	cout << fixed << setprecision(3) << 1.0*(b/a)*100 << "%" << endl;
	return 0;
}