#include<iostream>
using namespace std;
int main(){
	
  int a[5],n,i,sum=0;
  
  cout<<"array size :";
  cin>>n;
  
  cout<<"array element :";
  for(i=0;i<n;i++)
  {
  	cin>>a[i];
    
    sum=sum+a[i];
    
  }
    cout<<"sum =";
    return 0;
}

