#include<iostream>
using namespace std;

int main(){
	
	int f,c,fact=1;
	cout<<"no. :";
	cin>>c;
	
	for(f=c;f>=1;f--){
		f=f*fact;
	}
	cout<<"factorial is :"<<f;
    return 0;
}
	

