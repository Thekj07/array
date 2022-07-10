#include<iostream>
using namespace std;

int main(){
	int a=0,b=1,c,i,n;
	cout<<"eneter the no. :";
	cin>>n;
	cout<<a<<b;
	
	for(i=1;i<=n;i++){
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
		
	}
	return 0;
	
}
