#include<iostream>
using namespace std;

int main(){
	
int row,g;
cin>>row>>g;
for(int i=1;i<=row;i++){
	for(int j=1;j<=g;j++){
		if(i==1||i==row||j==1||j==g){
        	cout<<"k ";
		}else{
			cout<<" ";
		}
		
	
	}
	
}
}
