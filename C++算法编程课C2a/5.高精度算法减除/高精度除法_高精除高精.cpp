#include <iostream>
#include <string>
using namespace std;
bool judge(int* a,int* b,int len){ //判断len长度的 b 是否可以被 a 除  
	if(a[len]>0) return true; //如果 a 比 b 长, 一定可以除 
	for(int i=len-1;i>=0;i--){//从 a 的最高位开始比 
		if(a[i]>b[i]) return true;//除去相等位的最高位大于b,说明a比b大,可以除 
		else if(a[i]<b[i]) return false;//除去相等位的最高位小于b,说明a比b小，不可以除 
	}
	return true;//a和b完全一样,可以除 
}

int main(){
	string a_s,b_s;
	int a[521]={0},b[521]={0},ans[521]={0};
	int i,j,len_a,len_b,len;
	cin>>a_s>>b_s;
	
	if(b_s=="0"){//除数不能为0 
		cout<<"除数不能为0"<<endl;
		return 0; 
	}
	
	len_a=a_s.length();//计算 a和 b的长度 
	len_b=b_s.length();
	len=len_a-len_b; //结果最开始的下标 
	
	for(i=0;i<len_a;i++) a[i]=a_s[len_a-1-i]-'0';//字符型转int型 
	for(i=0;i<len_b;i++) b[i]=b_s[len_b-1-i]-'0';
	
	for(i=len_a-len_b;i>=0;i--){
		while(judge(a+i,b,len_b)){//当a可以被b减的时候一直进行，直到不能被减,即得到最终的商 
			ans[i]++; //记录a被b减的次数，即为除法的结果 
			for(j=0;j<=len_b-1;j++){//高精度减法的实现方法 
				if(a[i+j]<b[j]){
					a[i+j+1]--;
					a[i+j]+=10;
				}
				a[i+j]-=b[j];
			}
		}
	}
	
	while(a[len_a]==0&&len_a>0) len_a--;//去掉前缀无用的零 
	while(ans[len]==0&&len>0) len--;
	
	for(i=len;i>=0;i--) cout<<ans[i];//输出结果 
	if(len<0) cout<<"0";//当被除数短于除数时,len<0不进行上一条语句,单独输出一个零 
	if(len_a>1||a[0]>0){//a最后没有减完的部分成为余数，余数为0就不输出 
		cout<<"余";
		for(i=len_a;i>=0;i--) cout<<a[i];
	} 
}

