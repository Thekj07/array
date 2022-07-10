#include<iostream>
using namespace std;

int main(){
	
	int f,c;
	cout<<"no. :";
	cin>>c;
	f=1;
	
	while(c>=1){
		f=f*c;
		c=c-1;
	}
	cout<<"fact is . :"<<f;
	return 0;
	
}
	

