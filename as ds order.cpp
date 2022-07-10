#include<iostream>
using namespace std;

int main(){
	int i,j,c;
int a[9]={3,34,45,55,7,5,70,48,44};

for(i=0;i<9;i++){
	
	for(j=i+1;j<9;j++){
		if(a[j]<a[i]){
		
		c=a[i];
		a[i]=a[j];
	    a[j]=c;

    }
  }
}
cout<<"no. in order. :"<<endl;
for(i=0;i<9;i++)
{
	cout<<a[i]<<endl;
}
}
