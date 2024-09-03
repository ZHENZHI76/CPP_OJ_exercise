#include<iostream>
using namespace std;

int temp=0;

int f(int a){
  	int e[10]= {6,2,5,5,4,5,6,3,7,6}, x = a, y = 0;
    
  	if(x==0){
        return e[0];
    }

  	while(x){
    	y = y+e[x%10];
        x /= 10;
  	}
  	return y;
}

int main(){
  	int n;
  	cin >> n;
  	for(int a = 0; a <= 1111; a++){
    	for(int b = a; b<= 1111; b++){
     		if( f(a) + f(b) + f(a+b) == n-4){ 
      			temp++;
            }
        }
    }
  	cout << temp << endl;
 	return 0; 
}